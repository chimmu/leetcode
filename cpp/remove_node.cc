#include <iostream>
#include "list.h"
using namespace std;

/**
 * Given a linked list, remove the nth node from the end of list and return its head.
 *
 * For example,
 *
 *    Given linked list: 1->2->3->4->5, and n = 2.
 *
 *       After removing the second node from the end, the linked list becomes 1->2->3->5.
 *       Note:
 *       Given n will always be valid.
 *       Try to do this in one pass.
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
		ListNode* removeNthFromEnd(ListNode* head, int n) {
			ListNode **p, *pt;
			pt = head;
			p = &head;
			while (n--) {
				pt = pt->next;
			}
			while (pt) {
				pt = pt->next;
				p = &(*p)->next;
			}
			pt = (*p)->next;
			if (pt) {
				(*p)->val = pt->val;
				(*p)->next = pt->next;
			} else 
				*p = NULL;
			return head;
		}
};

int main()
{
	Solution s;
	List l;

	for (int i = 0; i < 10; i++)
		l.add(i);
	cout << "before: ";
	l.print();
	cout << endl;
	cout << "remove 2th from end: ";
	ListNode *head = s.removeNthFromEnd(l.root, 1);
	while (head) {
		cout << head->val << " " ;
		head = head->next;
	}
	cout << endl;
	return 0;
}
