#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

class Solution {
	public:
		inline bool placeOk(vector<int> &vec, int k) {
			bool ret = true;
			for (int i = 0; i < k; i++) {
				if (vec[i] == vec[k] || abs(vec[i] - vec[k]) == abs(i - k)) {
					ret = false;
					break;
				}
			}
			return ret;
		}
		vector<vector<string> > solveNQueens(int n) {
			vector<int> vec(n, -1);
			vector<vector<string> > ret;
			int k = 0;
			while(k >= 0) {
				vec[k]++;//move to next column
				while(vec[k] < n && !placeOk(vec, k)) {
					vec[k]++;//move to next column
				}
				if (vec[k] < n) {
					if (k == n - 1) {//find a solution
						vector<string> vs;
						string s;
						for (int i = 0; i < n; i++) {
							s.clear();
							for (int j = 0; j < n; j++) {
								if (vec[i] == j) {
									s.push_back('Q');
									continue;
								}
								s.push_back('.');
							}
							vs.push_back(s);
						}
						ret.push_back(vs);
					} else {
						k++;//move to next row
						vec[k] = -1;
					}
				} else {
						vec[k] = -1;
						k--;//rollback
				}
			}
			return ret;
		}

};


int main()
{
	Solution s;
	int n = 8;
	vector<vector<string> > ret = s.solveNQueens(n);
	int len = ret.size();
	for (int i = 0; i < len; i++) {
		vector<string> &vec = ret[i];
		for (int j = 0; j < n; j++) {
			cout << vec[j] << endl;
		}
		cout << endl;
	}
}
