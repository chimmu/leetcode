#include <iostream>
#include <string>
#include <algorithm>

/**
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 *
 * For example:
 *
 *	1 -> A
 *	2 -> B
 *	3 -> C
 *	...
 *	26 -> Z
 *	27 -> AA
 *	28 -> AB 
 */

using namespace std;
class Solution {
	public:
		string convertToTitle(int n) {
			string ret;
			while (n) {
				n--;
				ret.push_back(n % 26 + 'A');
				n /= 26;
			}
			std::reverse(ret.begin(), ret.end());
			return ret;
		}

};

int main()
{
	Solution s;

	cout <<"1 " << s.convertToTitle(1) << endl;
	cout << "26" << s.convertToTitle(26) << endl;
	cout << "27" << s.convertToTitle(27) << endl;
	cout << "28" << s.convertToTitle(28) << endl;
	cout << "29" << s.convertToTitle(29) << endl;
	cout << "53" << s.convertToTitle(53) << endl;
	cout << "52" << s.convertToTitle(52) << endl;
	cout << "123456" << s.convertToTitle(123456) << endl;
	return 0;
}
