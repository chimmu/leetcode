#include <iostream>
/**
 *Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

 Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
 *
 */
using namespace std;

/**
 *  * Definition for singly-linked list.
 */
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
	public:
		void deleteNode(ListNode* node) {
			ListNode *tmp = node->next;
			node->val = tmp->val;
			node->next = tmp->next;
			delete tmp;
		}

		void addNode(int val) {
			ListNode *p = new ListNode(val);
			if (!root) {
				root = p;
			} else {
				p->next = root;
				root = p;
			}
		}
		ListNode* find(int val) {
			ListNode *p = root;
			while (p && p->val != val) p = p->next;
			return p;
		}
		void print() const {
			ListNode *p = root;
			while (p) {
				cout << p->val << " ";
				p = p->next;
			}
			cout << endl;
		}
		Solution():root(0) {}
		~Solution() {
			ListNode *p = root, *tmp = NULL;
			while (p) {
				tmp = p->next;
				delete p;
				p = tmp;
			}
			root = NULL;
		}
	private:
		ListNode *root;

};

int main()
{
	Solution s;
	for (int i = 0; i < 10; i++)
		s.addNode(i);
	cout << "before" << endl;
	s.print();
	cout << "delete 1" << endl;
	s.deleteNode(s.find(1));
	s.print();
	cout << "delete 9" << endl;
	s.deleteNode(s.find(9));
	s.print();
	return 0;
}
