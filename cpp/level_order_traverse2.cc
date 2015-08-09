#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include "btree.h"
using namespace std;
/**
 * Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
 *
 * For example:
 * Given binary tree {3,9,20,#,#,15,7},
 *
 *     3
 *    / \
 *   9  20
 *     /  \
 *    15   7
 *
 *                 return its bottom-up level order traversal as:
 *
 *                 [
 *                   [15,7],
 *                     [9,20],
 *                       [3]
 *                       ]
 *
 *                 ]
 */
/**
 *
 *  * Definition for a binary tree node.
 *
 *   * struct TreeNode {
 *   
 *    *     int val;
 *
 *     *     TreeNode *left;
 *
 *      *     TreeNode *right;
 *
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *
 *        * };
 *
 *         */

class Solution {
	
	public:

		  vector<vector<int> > levelOrderBottom(TreeNode *root) {
			queue<TreeNode *> q[2];
			TreeNode *p = root;
			vector<int> arr;
			vector<vector<int> > ret;
			int i = 0, j = 1;
			if (!root) {
				ret.clear();
				return ret;
			}
			q[i].push(p);
			while (!q[i].empty()){
				arr.clear();
				while (!q[i].empty()) {
					p = q[i].front();
					q[i].pop();
					if (p->left)
						q[j].push(p->left);
					if (p->right)
						q[j].push(p->right);
					arr.push_back(p->val);
				}
				j = i;
				i = i ? 0: 1;
				//if (arr.size())
					ret.push_back(arr);
			}
			reverse(ret.begin(), ret.end());
			return ret;
		}

};

void visit(const int val)
{
	cout << val << " " << endl;
}
int main()
{
	TreeNode *root = NULL;
	//srand(time(NULL));
#if 1
	for (int i = 0; i < 10; i++) {
		btree_add(&root, rand() % 10);
	}
	preorder_traverse(root, visit);
#endif
	Solution s;
	vector<vector<int> > vv = s.levelOrderBottom(root);
	cout << "level order" << endl;
	for (int i = 0; i < vv.size(); i++) {
		cout << "[ ";
		vector<int> vec = vv[i];
		for (int j = 0; j < vec.size(); j++) {
			cout << vec[j] << " ";
		}
		cout << "]" << endl;
	}
	return 0;
}
