#include <iostream>
#include <vector>
using namespace std;
/**
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
 *
 * For example,
 * Given nums = [0, 1, 3] return 2.
 *
 * Note:
 * Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
 */

class Solution {
	public:
		int missingNumber(vector<int>& nums) {
			int size = nums.size();
			int sum = 0;
			for (int i = 0; i < size; i++)
				sum += nums[i];
			return (size * (size + 1))/2 - sum;
		}
};

int main()
{
	vector<int> vec;
	//for (int i = 0; i < 2; i++)
		//vec.push_back(i);
	vec.push_back(0);
	Solution s;
	cout << s.missingNumber(vec) << endl;
	return 0;
}
