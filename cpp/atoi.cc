#include <iostream>
#include <limits.h>
using namespace std;
/**
 * Implement atoi to convert a string to an integer.
 *
 * Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.
 *
 * Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.
 *
 * Update (2015-02-10):
 * The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button  to reset your code definition.
 */

class Solution {
	public:
		int myAtoi(string str){
			if (str.empty()) return 0;
			const char *p = str.c_str();
			int ret = 0, flag = 1, tmp = 0;
			bool first = false;
			while(*p) {
				if (!first && *p == ' ') {
					p++;
					continue;
				}
				if (!first) {
					if (*p == '-' || *p == '+') {
						if (*p == '-')
							flag = -1;
						else 
							flag = 1;
						p++;
						first = true;
						continue;
					} 
				}
				if (*p < '0' || *p > '9')
					break;
				first = true;
				tmp = ret;
				ret *= 10;
				ret += (*p - '0');
				if (tmp > ret){
					if (flag > 0) return INT_MAX;
					else return INT_MIN;
				}
				p++;
			}
			return ret * flag;
		}

};

int main()
{
	Solution s;

	cout << s.myAtoi("") << endl;
	cout << s.myAtoi("abcd") << endl;
	cout << s.myAtoi("123abcd") << endl;
	cout << s.myAtoi("-123456") << endl;
	cout << s.myAtoi("+123456") << endl;
	cout << s.myAtoi("--123456") << endl;
	cout << s.myAtoi("++123456") << endl;
	cout << s.myAtoi("+      123456") << endl;
	cout << s.myAtoi("-      123456") << endl;
	cout << s.myAtoi("    000  123456") << endl;
	cout << s.myAtoi("    000123456") << endl;
	cout << s.myAtoi("123.456") << endl;
	cout << s.myAtoi("1234569999999999999999999") << endl;
	cout << s.myAtoi("-1234569999999999999999999") << endl;
	cout << s.myAtoi("-2147483649") << endl;

}
