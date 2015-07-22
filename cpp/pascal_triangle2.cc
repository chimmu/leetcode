#include <iostream>
#include <vector>
using namespace std;

/**
 * Given an index k, return the kth row of the Pascal's triangle.
 *
 * For example, given k = 3,
 * Return [1,3,3,1].
 *
 * Note:
 * Could you optimize your algorithm to use only O(k) extra space?
 */

class Solution {
	public:
		vector<int> getRow(int rowIndex) {
			vector<int> svec(1, 1);
			rowIndex++;
			for (int i = 1; i <= rowIndex ; i++) {
				vector<int> vec(i, 1);
				for (int j = 2; j < i; j++) {
					vec[j-1] = svec[j-2]+svec[j-1];
				}
				if (i == rowIndex) return vec;
				svec = vec;
			}
			return svec;
		}
};

int main(int argc, char **argv)
{
	if (argc != 2) {
		cout << "usage: " << argv[0] << " index" << endl;
		return -1;
	}
	Solution s;
	vector<int> vec = s.getRow(*argv[1] - '0');
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	return 0;
}
