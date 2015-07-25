#include <iostream>
#include <vector>
/**
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 *
 * Note:
 * You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
 */

using namespace std;

class Solution {

	public:

		void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {	    
			vector<int> vec(nums1.begin(), nums1.begin() + m);
			int i = 0, j = 0, k = 0, flag = 0;
			while (1) {
				if (i == m) {
					flag = 1;
					break;
				} 
				if (j == n) {
					flag = 2;
					break;
				}
				if (vec[i] < nums2[j]) {
					nums1[k] = vec[i];
					i++;
				}
				else {
					nums1[k] = nums2[j];
					j++;
				}
				k++;

			}
			if (flag == 1) {
				for (;j < n;j++)
					nums1[k++] = nums2[j];
			} else if (flag == 2) {
				for (; i < m; i++)
					nums1[k++] = vec[i];
			}
		}


};

int main()
{
	int a1[] = {1, 2, 5, 9 , 10};
	int a2[] = { 2, 3, 6, 8, 9 };
	vector<int> vec1(a1, a1+5);
	vector<int> vec2(a2, a2 + 5);
	vec1.resize(10);

	Solution s;
	s.merge(vec1, 5, vec2, 5);
	for (int i = 0;i < 10; i++) 
		cout << vec1[i] << endl;
	return 0;
}
