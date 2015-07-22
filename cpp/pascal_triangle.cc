#include <iostream>
#include <vector>
using namespace std;
/**
 * Given numRows, generate the first numRows of Pascal's triangle.
 *
 * For example, given numRows = 5,
 * Return
 *
 * [
 *      [1],
 *     [1,1],
 *    [1,2,1],
 *   [1,3,3,1],
 *  [1,4,6,4,1]
 * ]
 */
class Solution {
	public:
		vector<vector<int> > generate(int numRows) {
			vector<vector<int> > vret;
			vector<int> svec(1, 1);
			for (int i = 1; i <= numRows; i++) {
				vector<int> vec(i, 1);
				for (int j = 2; j <= i - 1; j++) {
					vec[j-1] = svec[j-2]+svec[j-1];
				}
				svec = vec;
				vret.push_back(vec);
			}
			return vret;
		}
};
int main(int argc, char **argv)
{
	Solution s;
	vector<vector<int> > ret = s.generate(5);
	cout << "[ " << endl;;
	for (int i = 0; i < ret.size();i++) {
		vector<int> vec = ret[i];
		cout << "[";
		for (int j = 0; j < vec.size(); j++) {
			cout << vec[j] << " ";
		}
		cout << "]," << endl;
	}
	cout << "]" << endl;
	return 0;
}
