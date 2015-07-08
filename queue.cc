#include <iostream>

class Queue {
	private:
		struct Node {
			int data;
			Node *next;
			Node(int elem):data(elem),next(NULL){}
		};
		Node *head;
		Node *tail;

	public:
		Queue():head(NULL),tail(NULL){}
		~Queue() {
			while (head) {
				Node *tmp = head->next;
				head = head->next;
				delete tmp;
			}
		}

		//Push element x to the back of queue.
		void push(int x) {
			Node *pnode = new Node(x);
			if (head) {
				head = tail = pnode;
			} else {
				tail->next = pnode;
				tail = pnode;
			}
			
		}

		// Removes the element from in front of queue.

		void pop(void) {
			if (!head) return;
			Node *tmp = head;
			head = head->next;
			delete tmp;
		}


		// Get the front element.

		int peek(void) {
			if (!head) return -1;
			return head->data;
		}


		// Return whether the queue is empty.

		bool empty(void) {
			return !head;
		}

};

using namespace std;
int main()
{
	Queue q;
	
	cout << q.empty() << endl;
	for (int i = 0; i < 5; i++) {
		q.push(i);
	}

	cout << q.empty() << endl;
	for (int i = 0; i < 5; i++) {
		cout << q.peek() << endl;
		q.pop();
	}
	cout << q.empty() << endl;
	return 0;
}
