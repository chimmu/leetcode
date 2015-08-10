#include <iostream>
using namespace std;
/**
 * Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
 *
 * If the last word does not exist, return 0.
 *
 * Note: A word is defined as a character sequence consists of non-space characters only.
 *
 * For example,
 * Given s = "Hello World",
 * return 5. 
 */

class Solution {
	
	public:

		int lengthOfLastWord(string s) {
			if (s.empty()) return 0;
			string::reverse_iterator iter = s.rbegin();
			int len = 0;
			int start = 0;
			for (;iter != s.rend(); ++iter) {
				if ((*iter >= 'A' && *iter <= 'Z')
						|| (*iter >= 'a' && *iter <= 'z')){
					if (start == 0) 
						start = 1;
					len++;
					continue;
				} 
				if (start == 1) {
					start = 2;
					break;
				}
			}
			return len;
		}


};

int main()
{
	Solution s;

       /* cout << s.lengthOfLastWord("") << endl;*/
	/*cout << s.lengthOfLastWord("                 ") << endl;*/
	cout << s.lengthOfLastWord("hello world") << endl;
	cout << s.lengthOfLastWord("hello world               ") << endl;
	cout << s.lengthOfLastWord("helloworld               ") << endl;
	return 0;
}
