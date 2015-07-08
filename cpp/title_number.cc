#include <iostream>
/**
 *Given a column title as appear in an Excel sheet, return its corresponding column number.

 For example:

 A -> 1
 B -> 2
 C -> 3
 ...
 Z -> 26
 AA -> 27
 AB -> 28 
 */
using namespace std;
class Solution {
	public:
		int titleToNumber(string s) {
			const char *p = s.c_str();
			int ret = 0;
			if (s.length() == 1) {
				
				ret =   *p - 'A' + 1;
			} else {
				ret = 26 + *(p+1) - 'A' + 1
			}	
			return ret;
		}
}
;

int main()
{
	Solution s;
	cout << s.titleToNumber("A") << endl;
	cout << s.titleToNumber("AA") << endl;
}
