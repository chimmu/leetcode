#include <iostream>
#include <vector>
using namespace std;

/**
 * You are climbing a stair case. It takes n steps to reach to the top.
 *
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? 
 */

class Solution {

	public:

		int climbStairs(int n) {
			vector<int> vec(n+1);
			vec[1] = 1;
			vec[2] = 2;
			for (int i = 3; i <= n; i++)
				vec[i] = vec[i - 1] + vec[i - 2];
			return vec[n];
		}

};

int main()
{
	Solution s;

	cout << s.climbStairs(3) << endl;
	cout << s.climbStairs(10) << endl;
	cout << s.climbStairs(80) << endl;
	return 0;
}
