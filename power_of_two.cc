#include <iostream>

class Solution {

	public:

		bool isPowerOfTwo(int n) {
			while (n > 0 && n % 2 == 0) n /= 2;
			if (n == 1) return true;
			return false;
		}


};
using namespace std;
int main()
{
	Solution s;
	cout << s.isPowerOfTwo(0) << endl;
	cout << s.isPowerOfTwo(32) << endl;
	cout << s.isPowerOfTwo(100) << endl;
	cout << s.isPowerOfTwo(1) << endl;
	cout << s.isPowerOfTwo(3) << endl;
	cout << s.isPowerOfTwo(1024) << endl;
}
