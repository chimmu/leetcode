#include <iostream>
#include <stack>
using namespace std;
class MinStack {
	private:
		struct node {
			int val;
			node *next;
			node *prev;
			node(int v):val(v),next(0),prev(0){}
		};
		node *pt;
		stack<int> ms;
	public:
		MinStack():pt(0){}
		~MinStack() {
			node *p = pt;
			while (pt) {
				p = pt;
				pt = pt->prev;
				delete p;
			}
		}
		void push(int x) {
			node *p = new node(x);
			if (pt) {
				pt->next = p;
				p->prev = pt;
				pt = p;
			} else {
				pt = p;
			}
			if (ms.empty() || x <= ms.top())
				ms.push(x);
		}



		void pop() {
			if (!pt) return;
			node *p = pt;
			if (p->val == ms.top())
				ms.pop();
			if (pt->prev) {
				pt = pt->prev;
				pt->next = NULL;
				delete p;
			} else {
				delete p;
				pt = NULL;
			}
		}



		int top() {
			if (!pt) return -1;
			return pt->val;
		}



		int getMin() {
			/*node *p = pt;*/
			//int m = p->val;
			//while (p) {
				//if (p->val < m)
					//m = p->val;
				//p = p->prev;
			//}
			/*return m;*/
			return ms.top();
		}
};

int main()
{
	MinStack s;

	for(int i = 0; i < 10; i++) {
		s.push(i);
	}
	int t = 0;
	for (int i = 0; i < 10; i++) {
		cout << "t is " << s.top() << endl;
		cout << "min: " << s.getMin() << endl;
		s.pop();
	}
	return 0;
}
