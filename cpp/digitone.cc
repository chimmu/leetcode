#include <iostream>
#include <stdio.h>
using namespace std;
/**
Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

For example:
Given n = 13,
Return 6, because digit 1 occurred in the following numbers: 1, 10, 11, 12, 13
*/
#if 0
class Solution {
public:
    int countDigitOne(int n) {
		if (n <= 0) return 0;
		else if (n < 10) return (1);
		else if (n == 10) return 2;
		else if (n >= 11 && n <= 20) {
			return (3 + n - 11 + 1);
		}

        int ret = 0;
		int tmp = n / 10;
		while (tmp >= 10) {
			ret += 20;
			tmp /= 10;
		}
		ret += tmp;
		return ret;
    }
};
#else
//²Î¿¼http://www.cnblogs.com/grandyang/p/4629032.html
class Solution {
public:
    int countDigitOne(int n) {
        int res = 0, a = 1, b = 1;
        while (n > 0) {
            res += (n + 8) / 10 * a + (n % 10 == 1) * b;
            b += n % 10 * a;
            a *= 10;
            n /= 10;
        }
        return res;
    }
};
#endif
int main()
{
	Solution s;
	cout << s.countDigitOne(13) << endl;
	cout << s.countDigitOne(3) << endl;
	cout << s.countDigitOne(100) << endl;
	getchar();
}