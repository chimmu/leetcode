#include <iostream>

using namespace std;
/**
 *  Given an input string, reverse the string word by word.
 *
 *  For example,
 *  Given s = "the sky is blue",
 *  return "blue is sky the".
 *
 *  Update (2015-02-12):
 *  For C programmers: Try to solve it in-place in O(1) space
 */

class Solution {

	public:

		void reverseWords(string &s) {
			string ret, tmp;
			bool word = false, flag = false;
			for (int i = s.length() - 1; i >= 0; i--) {
				if (!isspace(s[i])) {
					word = true;
					tmp.push_back(s[i]);
				}
				else {
					if (word) {
						if (flag) {
							ret.push_back(' ');
						}
						flag = true;
						ret.append(tmp.rbegin(), tmp.rend());
						word = false;
						tmp.clear();
					}
				}
			}
			if (word) {
				if (flag)
					ret.push_back(' ');
				ret.append(tmp.rbegin(), tmp.rend());
			}
			s = ret;
		}

};

int main()
{
	Solution s;
	string ret = "hello world!";
	s.reverseWords(ret);
	cout << ret << endl;
	return 0;
}
