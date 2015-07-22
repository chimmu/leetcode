#include <iostream>
#include "list.h"
using namespace std;

/**
 * Given a sorted linked list, delete all duplicates such that each element appear only once.
 *
 * For example,
 * Given 1->1->2, return 1->2.
 * Given 1->1->2->3->3, return 1->2->3.
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
		ListNode* deleteDuplicates(ListNode* head) {
			ListNode **p = &head->next;
			int prev = head->val;
			while(*p) {
				if ((*p)->val == prev) {//delete *p
					if ((*p)->next) {
						(*p)->val = (*p)->next->val;
						(*p)->next = (*p)->next->next;
						continue;
					} 
					//meet the end
					*p = NULL;
					break;
				}
				prev = (*p)->val;
				p = &(*p)->next;
			}
			return head;
		}

};

int main()
{
	Solution s;
	List l;

	l.add(3);
	l.add(3);
	l.add(3);
	l.add(2);
	l.add(2);
	l.add(1);
	l.add(1);
	cout << "before: ";
	l.print();
	ListNode *head = s.deleteDuplicates(l.root);
	cout << "after";
	while (head) {
		cout << head->val <<  "->";
		head = head->next;
	}
	cout << endl;
	return 0;
}
