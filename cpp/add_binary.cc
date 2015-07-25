#include <iostream>
#include <algorithm>
using namespace std;

/**
 * Given two binary strings, return their sum (also a binary string).
 *
 * For example,
 * a = "11"
 * b = "1"
 * Return "100". 
 */

class Solution {

	public:
		string addBinary(string a, string b) {
			string ret;
			int lena = a.length();
			int lenb = b.length();
			int flag = 0;
			int tmp = 0, ta = 0, tb = 0;
			int j = 0;
			for (int i = lena - 1, j = lenb - 1 ; (i >= 0 || j >= 0); i--, j--) {
				ta = tb = 0;
				if (i >= 0)
					ta = a[i] - '0';
				if (j >= 0)
					tb = b[j] - '0';
				tmp = ta + tb + flag;
				if (tmp >= 2) {
					tmp -= 2;
					flag = 1;
				} else {
					flag = 0;
				}
				ret.push_back((char)tmp + '0');
			}
			if (flag)
				ret.push_back('1');
			reverse(ret.begin(), ret.end());
			return ret;
		}

};

int main()
{
	Solution s;
	cout << s.addBinary("1011", "101") << endl;
	cout << s.addBinary("0", "0") << endl;
}
