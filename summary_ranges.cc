#include <vector>
#include <string>
#include <iostream>
/*
 *  Given a sorted integer array without duplicates, return the summary of its ranges.
 *
 *  For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"]. 
 */
using namespace std;
class Solution {

	public:

		vector<string> summaryRanges(vector<int>& nums) {
			    vector<string> vec(0);
			    int len = nums.size();
			    if (len == 0) return vec;
			    if (len == 1) {
				    vec.push_back((to_string(nums[0])));
				    return vec;
			    } 
			    bool flag = false;
			    int t = nums[0];
			    for (int i = 0; i < len - 1 ;i++) {
				    if (nums[i + 1] - nums[i] == 1) {
					    flag = true;
					    continue;
				    } 
				    if (flag) {
					    vec.push_back((to_string(t)) + "->" + (to_string(nums[i])));
				    } else {
					    vec.push_back((to_string(t)));
				    }
				    t = nums[i + 1];
				    flag = false;

			    }

			    if (flag){ 
				    vec.push_back((to_string(t)) + "->" + (to_string(nums[len - 1])));
			    } else {
				    vec.push_back(to_string(nums[len - 1]));
			    }
			    return vec;
		}
};

int main(void) 
{
	vector<int> vint;
	vint.push_back(0);
	vint.push_back(8);
	Solution sl;
	vector<string> vstr = sl.summaryRanges(vint);
	for (vector<string>::iterator iter = vstr.begin(); iter != vstr.end(); ++iter) {
		cout << *iter << endl;
	}
	return 0;
}
