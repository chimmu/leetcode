#include <iostream>
#include <vector>
using namespace std;

/**
 * Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.
 *
 * For example,
 * Given [3,2,1,5,6,4] and k = 2, return 5.
 *
 * Note:
 * You may assume k is always valid, 1 ≤ k ≤ array's length.
 */

class Solution {
	public:
		int part(vector<int> &nums, int low, int high) {
			int pivot = nums[high];
			int i = low - 1;
			for (int j = low; j < high; j++) {
				if (nums[j] <= pivot) {
					++i;
					swap<int>(nums[j], nums[i]);
				}
			}
			++i;
			swap<int>(nums[i], nums[high]);
			return i;
		}
		void myqsort(vector<int> &nums, int low, int high) {
			if (low < high) {
				int pivot = part(nums, low, high);
				myqsort(nums, low, pivot - 1);
				myqsort(nums, pivot + 1, high);
			}
		}
		int findKthLargest(vector<int>& nums, int k) {
			int len = nums.size();
			myqsort(nums, 0, len - 1);
			return nums[len - k];
		}
};

int main()
{
	Solution s;
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);

	cout << s.findKthLargest(vec, 1) << endl;
	return 0;
}
