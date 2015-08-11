#include <iostream>
#include <vector>
using namespace std;

/**
 *  Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 *
 *  Do not allocate extra space for another array, you must do this in place with constant memory.
 *
 *  For example,
 *  Given input array nums = [1,1,2],
 *
 *  Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length. 
 */

class Solution {
	
	public:

		int removeDuplicates(vector<int>& nums) {
			int len = nums.size();
			if (len == 0) return 0;
			vector<int>::iterator iter = nums.begin();
			int nprev = *iter++;
			while(iter != nums.end()) {
				if (nprev == *iter) {
					len--;
					nums.erase(iter);
					continue;
				}
				nprev = *iter++;
			}
			return len;
		}

};

int main()
{
	vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(1);
	Solution s;
	//cout << s.removeDuplicates(vec) << endl;
	for (int i = 0; i < 100; i++)
		vec.push_back(2);
	cout << s.removeDuplicates(vec) << endl;
	return 0;
}
