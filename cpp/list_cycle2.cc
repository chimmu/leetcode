#include <iostream>
#include "list.h"
using namespace std;
/**
 *  Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 *
 *  Follow up:
 *  Can you solve it without using extra space? 
 */

/**
 *
 *  * Definition for singly-linked list.
 *
 *   * struct ListNode {
 *   
 *    *     int val;
 *
 *     *     ListNode *next;
 *
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *
 *       * };
 *
*/

class Solution {
	public:
		ListNode *detectCycle(ListNode *head) {
			if (!head || !head->next) return NULL;
			ListNode *p = head, *pn = head->next;
			while(pn) {
				if (pn == p) {
					break;
				}
				if (!pn->next || !pn->next->next)
					return NULL;
				p = p->next;
				pn = pn->next->next;

			}
			p = head;
			pn = pn->next;
			while (p != pn) {
				p = p->next;
				pn = pn->next;
			}
			return p;
		}

};

int main()
{
	Solution s;
	List l;

	for (int i = 5; i > 0; i--)
		l.add(i);
	ListNode *tail = l.getTail();
	cout << "tail value is: " << tail->val << endl;
	tail->next = l.root;
	ListNode *p = s.detectCycle(l.root);
	cout << p->val << endl;
	tail->next = NULL;
	return 0;
}
