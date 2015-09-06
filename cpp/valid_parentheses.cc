#include <iostream>
#include <stack>
using namespace std;

/**
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 *
 * The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not."))"
 */

class Solution {
	public:
		bool isValid(string s) {
			stack<char> st;
			int len = s.length();
			char c = 0;
			bool ret = true;
			for (int i = 0; i < len; i++) {
				if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
					st.push(s[i]);
					continue;
				}
				if (st.empty()) {
					return false;
				}
				c = st.top();
				switch (c) {
				case '(': 
					if (s[i] != ')') {
						ret = false;
					}
					break;
				case '[':
					if (s[i] != ']')
						ret = false;
					break;
				default:
					if (s[i] != '}')
						ret = false;
					break;
				}
				if (!ret)
					return ret;
				st.pop();
			}
			if (!st.empty())
				ret = false;
			return ret;
		}

};


int main()
{
	Solution s;
	cout << s.isValid("()") << endl;
	cout << s.isValid("(") << endl;
	cout << s.isValid("}") << endl;
	cout << s.isValid("([)]") << endl;
	cout << s.isValid("([])") << endl;

}
