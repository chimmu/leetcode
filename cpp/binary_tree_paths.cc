#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include "btree.h"
using namespace std;

/**
 * Given a binary tree, return all root-to-leaf paths.
 *
 * For example, given the following binary tree:
 *
 *    1
 *  /   \
 * 2     3
 *  \
 *   5
 *        All root-to-leaf paths are:
 *
 *        ["1->2->5", "1->3"]
 */
class Solution {
	public:
		inline void myitoa(int ch, string &ret) {
			char t = 0;
			bool flag = false;
			if (ch < 0) {
				ch *= -1;
				flag = true;
			}
			while(ch) {
				t = (ch % 10) + '0';
				ch /= 10;
				ret.push_back(t);
			}
			if (flag)
				ret.push_back('-');
			reverse( ret.begin(), ret.end());
		}
		vector<string> binaryTreePaths(TreeNode* root) {
			list<TreeNode *> st;
			vector<string> vec;
			if (root)
				st.push_back(root);
			TreeNode *p = root;
			map<TreeNode *, bool> mt;
			list<TreeNode *>::iterator iter;
			while(!st.empty()) {
				p = st.back();
				if(p->left && !mt.count(p->left)) {
					st.push_back(p->left);
					continue;
				}
				if (p->right && !mt.count(p->right)) {
					st.push_back(p->right);
					continue;
				}
				if (!p->left && !p->right) {
					string s;
					for(iter = st.begin(); iter != st.end(); ++iter) {
						string num;
						myitoa((*iter)->val, num);
						s+=num;
						if (p != *iter) {
							s.push_back('-');
							s.push_back('>');
						}
					}
					vec.push_back(s);
				}
				st.pop_back();
				mt[p] = true;
			}
			return vec;
		}

};

int main()
{
	TreeNode *root = NULL;
	for (int i = 0; i < 10; i++)
		btree_add(&root, (rand() % 100) * -1);
	Solution s;
	vector<string> vec = s.binaryTreePaths(root);
	for (vector<string>::iterator iter = vec.begin(); 
			iter != vec.end(); iter++) {
		cout << *iter << endl;
	}
	btree_deinit(&root);
}
