#include <iostream>
#include <vector>

using namespace std;

/**
 * Write a function to find the longest common prefix string amongst an array of strings.
 */

class Solution {
	public:
		string longestCommonPrefix(vector<string>& strs) {	
			int size = strs.size();
			if (!size) return "";
			string &str = strs[0];
			int i = 0, j = 0, len = str.length();
			bool flag = false;
			while (j < len) {
				for (i = 1; i < size; i++) {
					if (j >= strs[i].length() || strs[i][j] != str[j]) {
						flag = true;
						break;
					}
				}
				if (flag)
					break;
				j++;
			}
			if (j < 0) {
				return "";
			}
			string ret(str, 0, j);
			return ret;
		}

};

int main()
{
	vector<string> vec;

	vec.push_back("hello");
	vec.push_back("");
	vec.push_back("world");
	Solution s;
	cout << s.longestCommonPrefix(vec) << endl;
}
