#include <iostream>
#include <vector>
using namespace std;
/**
 * Follow up for N-Queens problem.
 *
 * Now, instead outputting board configurations, return the total number of distinct solutions.
 */

class Solution {
	public:
		inline bool placeOk(vector<int> &vec, int k) {
			bool ret = true;
			for (int i = 0; i < k; i++) {
				if (vec[i] == vec[k] || abs(vec[i] - vec[k]) == k - i) {
					ret = false;
					break;
				}
			}
			return ret;
		}
		int totalNQueens(int n) {
			int ret = 0;
			vector<int> vec(n, -1);
			int k = 0;
			while (k >= 0) {
				vec[k]++;
				while (vec[k] < n && !placeOk(vec, k))
					vec[k]++;
				if (vec[k] < n) {
					if (k == n - 1) {
						ret++;
						continue;
					} 
					k++;
					vec[k] = -1;
				} else {
					vec[k] = -1;
					k--;
				}
			}
			return ret;
		}

};

int main() 
{
	Solution s;
	cout << s.totalNQueens(4) << endl;
	cout << s.totalNQueens(8) << endl;
	cout << s.totalNQueens(16) << endl;
}
