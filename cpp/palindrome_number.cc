#include <iostream>
/**
 * Determine whether an integer is a palindrome. Do this without extra space.
 */
using namespace std;
class Solution {
	public:
		bool isPalindrome(int x) {
			if (x < 0) return false;
			long long rev = 0;
			int tmp = x;
			while (tmp > 0) {
				rev *= 10;
				rev += tmp % 10;
				tmp /= 10;
			}
			return rev == x;
		}

};

int main()
{
	Solution s;
	cout << s.isPalindrome(-1) << endl;
	cout << s.isPalindrome(2332) << endl;
	cout << s.isPalindrome(1234321) << endl;
	return 0;
}
