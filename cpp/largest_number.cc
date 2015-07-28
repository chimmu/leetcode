#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Given a list of non negative integers, arrange them such that they form the largest number.
 *
 * For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.
 *
 * Note: The result may be very large, so you need to return a string instead of an integer.
 */

class Solution {
	
	public:
		string myitoa(int num) {
			if (num == 0) 
				return "0";
			string ret;
			while (num) {
				ret.push_back((num % 10) + '0');
				num /= 10;
			}
			reverse(ret.begin(), ret.end());
			return ret;
		}
		int comp(string &a, string &b) {//比较两个数组合之后的大小
			string ra = a+b, rb = b+a;
			if (ra > rb) return 1;
			else if (ra < rb) return -1;
			return 0;
		}
		int part(vector<int> &nums, int low, int high) {
			int i = low - 1;
			string a;
			string b = myitoa(nums[high]);
			for (int j = low; j < high; j++) {
				a = myitoa(nums[j]);
				if (comp(a, b) <= 0) {
					i++;
					swap(nums[i], nums[j]);
				}
			}
			i++;
			swap(nums[i], nums[high]);
			return i;
		}
		void mysort(vector<int> &nums, int low, int high) {
			if (low < high) {
				int pivot = part(nums, low, high);
				mysort(nums, low, pivot - 1);
				mysort(nums, pivot+1, high);
			}
		}
		string largestNumber(vector<int>& nums) {
			if (nums.size() == 1) return to_string(nums[0]);
			mysort(nums, 0, nums.size() - 1);
			int len  = nums.size();
			string ret;
			if (nums[len - 1] == 0) return "0";
			for (int i = len - 1; i >= 0; i--) {
				ret.append(myitoa(nums[i]));
			}
			return ret;
		}


};

int main()
{
	vector<int> vec;
	//for (int i = 1; i < 10; i++)
		//vec.push_back(i);
	/*vec.push_back(3);*/
	//vec.push_back(30);
	//vec.push_back(34);
	//vec.push_back(5);
	/*vec.push_back(9);*/
	//vec.push_back(0);
	//vec.push_back(0);
	vec.push_back(824);
	vec.push_back(938);
	vec.push_back(1399);
	vec.push_back(5607);
	vec.push_back(6973);
	vec.push_back(5703);
	vec.push_back(9609);
	vec.push_back(4398);
	vec.push_back(8247);
	//vec.push_back(121);
	//vec.push_back(12);
	Solution s;
	cout << s.largestNumber(vec) << endl;
	return 0;
}
