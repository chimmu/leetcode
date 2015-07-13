#include <iostream>

/**
 * Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.
 *
 * For example, given the range [5, 7], you should return 4. 
 */
using namespace std;
class Solution {

	public:

		int rangeBitwiseAnd(int m, int n) {	        
			int i = 0;
			while (m != n) {
				m >>= 1;
				n >>= 1;
				++i;
			}
			return m << i;
		}


};

int main()
{
	Solution s;
	cout << s.rangeBitwiseAnd(5, 7) << endl;
	return 0;
}
