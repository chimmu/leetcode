#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Given a non-negative number represented as an array of digits, plus one to the number.
 *
 * The digits are stored such that the most significant digit is at the head of the list
 */

class Solution {

	public:

		vector<int> plusOne(vector<int>& digits) {
			int len = digits.size();
			vector<int> vec;
			int flag = 0;
			int tmp = 0;
			for (int i = len - 1; i >= 0; i--) {
				tmp = i == len - 1? digits[i] + 1: digits[i];
				tmp += flag;
				if (tmp >= 10) {
					tmp %= 10;
					flag = 1;
				} else 
					flag = 0;
				vec.push_back(tmp);
			}
			if (flag)
				vec.push_back(1);
			reverse(vec.begin(), vec.end());
			return vec;
		}


};
int main()
{
	Solution s;
	vector<int> vec;
	for (int i = 10; i >= 0; i--)
		vec.push_back(1);
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
	vector<int> rvec = s.plusOne(vec);
	for (int i = 0; i < rvec.size(); i++)
		cout << rvec[i] << " ";
	cout << endl;
	return 0;
}
