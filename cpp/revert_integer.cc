#include <iostream>
/**
 * Reverse digits of an integer.
 *
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321
 */

class Solution {
	public:
		int reverse(int x) {
			if (x > 2147483647 || x <= -2147483648) return 0;
			    int ret = 0, tmp = x;
			    int flag = 1;
			    if (x < 0) {
				    tmp = -x;
				    flag = -1;
			    }
			    while (tmp) {
				    if(ret > 2147483647 / 10)
					    return 0;
				    ret *= 10;
				    ret += tmp % 10;
				    tmp /= 10;
			    }
			    return ret * flag;
		}

};

using namespace std;

int main()
{
	Solution s;
	cout << s.reverse(123) << endl;
	cout << s.reverse(-123) << endl;
	cout << s.reverse(1) << endl;
	cout << s.reverse(-1) << endl;
	cout << s.reverse(0) << endl;
	cout << s.reverse(1534236469) << endl;
	cout << s.reverse(-2147483412) << endl;
	cout << s.reverse(-2147483648) << endl;
	return 0;
}
