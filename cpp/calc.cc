/*
 * =====================================================================================
 *
 *       Filename:  calc.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年06月16日 15时30分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  chimmu (https://github.com/chimmu), zhaocm@bbxpc.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <stack>
#include <stdlib.h>
using namespace std;

class Calculator{
	public:
		Calculator():m_last_pri(-1),m_last_char(-1){}
		void input() {
			cout << "Please input expression:" << endl;
			getline(cin, m_input);
		}
		int progress() {
			int i = 0;
			char c = 0;
			while (1) {
				int j = i;
				/*while (isdigit(m_input[i])) i++;*/
				//if (i > j)
					/*m_operators.push(atoi(m_input.substr(j, i-j).c_str()));*/
				eat_number(i, j);
				m_last_char = i > 0? m_input[i-1]:-1;
				c = m_input[i];
				i++;
				if (c == '\0')
					break;
				if (is_oprand(c)) {
					switch(c) {
						case '(': m_operands.push(c); m_last_pri = -1;break;
						case ')': while (1) {
								  if (m_operands.top() == '(') 
									  break;
								  calculate();
							  }
							  m_operands.pop(); //pop'('
							  break;
						case '-': if (m_last_char == '(') {
								  j = i;
								  eat_number(i, j, true);
								  break;
							  };
						default:
							  int pri = get_oprand_priority(c);
							  if (pri > m_last_pri) {
								  m_operands.push(c);
								  m_last_pri = pri;
							  } else {//@todo
								  m_last_pri = pri;
								  if (m_operators.size() >= 2)
									  calculate();
								  m_operands.push(c);
							  }
							  break;
					}

				} else {
					cout << "invalid input:" << m_input << endl;
					break;
				}

			}
			return calc_all();
		}
	private:
		int eat_number(int &i, int &j, bool isNegative = false) {
			while (isdigit(m_input[i])) i++;
			if (i > j) {
				int num = atoi(m_input.substr(j, i-j).c_str());
				if (isNegative)
					m_operators.push(0 - num);
				else
					m_operators.push(num);
			}
		}
		int calc_all() {
			while(!m_operands.empty()) {
				calculate();
			}
			m_last_pri = -1;
			int ret = m_operators.top();
			m_operators.pop();
			return ret;
		}
		int calculate() {
			int num2 = m_operators.top();
			m_operators.pop();
			int num1 = m_operators.top();
			m_operators.pop();
			int op = m_operands.top();
			m_operands.pop();
			int ret = calc(num1, num2, op);
			m_operators.push(ret);

		}
		int calc(int num1, int num2, int op) {
			int ret = 0;
			switch (op) {
				case '+': ret = num1 + num2; break;
				case '-': ret = num1 - num2; break;
				case '*': ret = num1 * num2; break;
				case '/': ret = num1 / num2; break;
			}
			return ret;
		}
		int is_oprand(char c) {
			return (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')');
		}
		int get_oprand_priority(char c) {
			int ret = -1;
			switch(c) {
				case '+':
				case '-':
					ret = 0; break;
				case '*':
				case '/':
					ret = 1; break;
				case '(':
				case ')':
					ret = 2; break;
			}
			return ret;
		}
		stack<int> m_operands, m_operators;
		string m_input;
		int m_last_char;
		int m_last_pri;
};

int main() {
	Calculator cal;
	while (1) {
		cal.input();
		int ret = cal.progress();
		cout << "result is: " << ret << endl;
	}
}
