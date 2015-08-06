#include <iostream>
#include "list.h"
using namespace std;

/**
 * Given a linked list, determine if it has a cycle in it.
 *
 * Follow up:
 * Can you solve it without using extra space?
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
		bool hasCycle(ListNode *head) {
			if (!head || !head->next)
				return false;
			ListNode *p = head, *pn = head->next->next;
			while(pn) {
				if (pn == p)
					return true;
				p = p->next;
				if (!pn->next || !pn->next->next)
					return false;
				pn = pn->next->next;
			}
			return false;
		}

};


int main()
{
	List l;
	Solution s;
	for (int i = 0; i < 2; i++) 
		l.add(i);
	ListNode *tail = l.getTail();
	tail->next = l.root;
	cout << s.hasCycle(l.root) << endl;
	tail->next = 0;
	return 0;
}
