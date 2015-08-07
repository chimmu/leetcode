#include "list.h"

List::List():root(NULL)
{
}

int List::add(int val)
{
	ListNode *p = new ListNode(val);
	if (!root)
		root = p;
	else {
		p->next = root;
		root = p;
	}
	return 0;
}

int List::del(int val)
{
	ListNode **p = &root;
	while(*p) {
		if((*p)->val == val) {
			ListNode *tmp = *p;
			*p = (*p)->next;
			delete tmp;
			return 0;
		}
		p = &(*p)->next;
	}
	return -1;
}

ListNode *List::getTail()
{
	ListNode *p = root, *prev = root;
	while (p) {
		prev = p;
		p = p->next;
	}
	return prev;
}
const void List::print() const
{
	ListNode *p = root;
	while (p) {
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");
	return /* something */;
}

List::~List()
{
	ListNode *p = root;
	while (p) {
		root = p->next;
		delete p;
		p = root;
	}
}

#if 0
int main()
{
	List ls;
	for (int i = 0; i < 10; i++) {
		ls.add(i);
	}
	ls.print();
	for (int i = 9; i >= 0; i--) {
		ls.del(i);
		ls.print();
	}
	return 0;
}
#endif
