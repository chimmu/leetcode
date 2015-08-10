#include <iostream>
#include <vector>
using namespace std;

/**
 * Given an array and a value, remove all instances of that value in place and return the new length.
 *
 * The order of elements can be changed. It doesn't matter what you leave beyond the new length. 
 */

class Solution {

	public:

		int removeElement(vector<int>& nums, int val) {
			int len = nums.size();
			vector<int>::iterator iter = nums.begin();
			while(iter != nums.end()) {
				if (*iter == val) {
					nums.erase(iter);
					len--;
					continue;
				}
				iter++;
			}
			return len;
		}


};

int main()
{
	vector<int> vec;
	vec.clear();
       /* for (int i = 0; i < 10; i++)*/
		/*vec.push_back(i % 5);*/
	Solution s;
	cout << s.removeElement(vec, 5) << endl;
	return 0;
}
