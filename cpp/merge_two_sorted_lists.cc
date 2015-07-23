#include <iostream>
#include "list.h"

using namespace std;

/**
 * Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists
 */

/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
*/
class Solution {
	public:
		ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
			ListNode *p = NULL, *head = NULL;
			while (l1 && l2) {
				if (l1->val < l2->val) {
					if (p) { 
						p->next = l1;
						p = l1;
					}
					else
						head = p = l1;
					l1 = l1->next;
				} else {
					if (p) {
						p->next = l2;
						p = l2;
					}
					else
						head = p = l2;
					l2 = l2->next;
				}
			}
			if (l1) {
				if (head)
					p->next = l1;
				else
					head = p = l1;
			}
			if (l2) {
				if (head)
					p->next = l2;
				else
					head = p = l2;
			}
			return head;
		}

};

int main()
{
	List l1, l2;
	Solution s;

	l1.add(11);
	l1.add(9);
	l1.add(5);
	l1.add(2);
	l1.add(1);
	l2.add(5);
	l2.add(4);
	l2.add(2);
	cout << "L1:" << endl;
	l1.print();
	cout << "L2:" << endl;
	l2.print();
	cout << "after" << endl;
	ListNode *head = s.mergeTwoLists(l1.root, l2.root);
	//ListNode *head = s.mergeTwoLists(NULL,NULL);
	while(head) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}
