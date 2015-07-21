#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
class List {
	public:
		List();
		~List();
		int add(int val);
		int del(int val);
		const void print() const;
	private:
		ListNode *root;
};
#endif
