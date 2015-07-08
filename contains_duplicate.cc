#include <iostream>
#include <map>
#include <vector>
/**
 * Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
 */
using namespace std;
class Solution {

	public:

		bool containsDuplicate(vector<int>& nums) {
			map<int, int> marr;
			int i = 0;
			pair<map<int, int>::iterator, bool> ret;
			for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++) {
				ret = marr.insert(map<int, int>::value_type(*iter, i));
				if (!ret.second)
					return true;
			}
			return false;
		}


};


int main()
{
	Solution s;
	vector<int> vec, vec1;
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(7);

	vec1 = vec;
	vec1.push_back(1);
	cout << s.containsDuplicate(vec) << endl;
	cout << s.containsDuplicate(vec1) << endl;
	return 0;

}
