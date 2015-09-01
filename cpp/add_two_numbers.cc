#include <iostream>
#include "list.h"
using namespace std;

/**
 * You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */

class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode *lret, *p;
			lret = p = l1 ? l1: l2;
			int bit = 0, tmp = 0;;
			while (l1 && l2) {
				tmp = (bit + l1->val + l2->val);
				bit = tmp / 10;
				l1->val = tmp % 10;
				p = l1;
				l1 = l1->next;
				l2 = l2->next;
			}
			while (l1) {
				tmp = (bit + l1->val);
				bit = tmp / 10;
				l1->val = tmp % 10;
				p = l1;
				l1 = l1->next;
			}
			if (l2) {
				p->next = l2;
			}
			while (l2) {
				tmp = (bit + l2->val);
				bit = tmp / 10;
				l2->val = tmp % 10;
				p = l2;
				l2 = l2->next;

			}
			if (bit) {
				p->next = new ListNode(bit);
			}
			return lret;
		}
};

int main()
{
	List l1, l2;
	l1.add(5);
	l2.add(5);

	l1.print();
	l2.print();
	Solution s;
	l1.root = s.addTwoNumbers(l1.root, l2.root);
	l1.print();
}
