#include <string>
#include <string.h>
#include <iostream>

/**
 *  Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
 *
 *  For example,
 *  "A man, a plan, a canal: Panama" is a palindrome.
 *  "race a car" is not a palindrome.
 *
 *  Note:
 *  Have you consider that the string might be empty? This is a good question to ask during an interview.
 *
 *  For the purpose of this problem, we define empty string as valid palindrome. 
 */

using namespace std;

class Solution {
	
	public:
		bool isPalindrome(string s) {
			if (s == "") return true;
			string::iterator iter = s.begin();
			string::reverse_iterator riter = s.rbegin();
			bool ret = true;
			while (1) {
				while (iter != s.end()&& !isalnum(*iter)) {
					++iter;
				}
				while (riter != s.rend() && !isalnum(*riter)) {
					++riter;
				}
				if (iter == s.end() && riter == s.rend())
					break;

				if ((iter == s.end() && riter != s.rend()) || 
						(iter != s.end() && riter == s.rend()) ||
						tolower(*iter) != tolower(*riter)){
					ret = false;
					break;
				}
				++iter;
				++riter;
			}
			return ret;

		}
};

int main()
{
	Solution s;
	cout << s.isPalindrome("") << endl;
	cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;
	cout << s.isPalindrome("1a2") << endl;
	cout << s.isPalindrome("2a2") << endl;
}
