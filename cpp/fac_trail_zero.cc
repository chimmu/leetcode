#include <iostream>

/**
 * Given an integer n, return the number of trailing zeroes in n!.
 *
 * 除以5后的个数
 * 25/5=5 5/5 = 1
* 1000 /5 = 200 200/5 = 40 40/5 = 8 8/5=1 sum = 200+40+8+1
 * Note: Your solution should be in logarithmic time complexity.
 */
using namespace std;

class Solution {
	public:
		int trailingZeroes(int n) {
			int ret = n / 5;
			int tmp = ret;
			while (tmp >= 5) {
				tmp/=5;
				ret += tmp;
			}
			return ret;
		}

};

int main()
{
	Solution s;
	cout << s.trailingZeroes(3) << endl;
	cout << s.trailingZeroes(5) << endl;
	cout << s.trailingZeroes(10) << endl;
	cout << s.trailingZeroes(25) << endl;
	cout << s.trailingZeroes(1000) << endl;
	return 0;
}
