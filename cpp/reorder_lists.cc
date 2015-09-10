#include <iostream>
#include <deque>
#include "list.h"
using namespace std;

/**
 * Given a singly linked list L: L0→L1→…→Ln-1→Ln,
 * reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…
 *
 * You must do this in-place without altering the nodes' values.
 *
 * For example,
 * Given {1,2,3,4}, reorder it to {1,4,2,3}.
 */

class Solution {
	public:
		void reorderList(ListNode* head) {
			deque<ListNode *> q;
			ListNode *p = head;
			int cnt = 0;
			while(p) {
				cnt++;
				q.push_back(p);
				p = p->next;
			}
			ListNode *p1 = head, *p2 = NULL;
			while(!q.empty()) {
				p1 = q.front();
				q.pop_front();
				if (p2)
					p2->next = p1;
				if (!q.empty()) {
					p2 = q.back();
					q.pop_back();
				}
				(p1)->next = p2;
			}
			if (cnt) {
				if (cnt % 2 )
					(p1)->next = NULL;
				else
					p2->next = NULL;
			} 
				return;
		}
};

int main()
{
	List l;
	for (int i = 0; i < 4; i++)
		l.add(i);
	Solution s;
	s.reorderList(l.root);
	ListNode *p = l.root;
	while (p) {
		cout << p->val << endl;
		p = p->next;
	}
}
