#include <iostream>
#include <vector>
#include <map>
#include <stdlib.h>
/**
 * Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 *
 * You may assume that the array is non-empty and the majority element always exist in the array.
 */
using namespace std;

class Solution {

	public:

		int majorityElement(vector<int>& nums) {
			map<int, int> res;
			int len = nums.size();
			int ret = 0, tmp = 0;
			for (int i = 0; i < len; i++) {
				if (res.count(nums[i]) == 0)
					res[nums[i]] = 1;
				else 
					res[nums[i]]++;
				if (res[nums[i]] >= (len >> 1) 
						&& res[nums[i]] > tmp) {
					tmp = res[nums[i]];
					ret = nums[i];
				}

			}
			return ret;
		}
};

int main()
{
	vector<int> vec;
	Solution s;
	//for (int i = 0; i < 10; i++) 
		//vec.push_back(rand() % 3);
	//for (int i = 0; i < 10; i++)
		//cout << vec[i] << endl;
	vec.push_back(6);
	cout << "find...." << endl;
	cout << s.majorityElement(vec) << endl;
	return 0;
}
