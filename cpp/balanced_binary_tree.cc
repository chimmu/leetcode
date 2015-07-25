#include <iostream>
#include "btree.h"
using namespace std;

/**
 * Given a binary tree, determine if it is height-balanced.
 *
 * For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1
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
*/

class Solution {
	
	public:
		bool isBalanced2(TreeNode *root, int &height) {
			if (!root) {
				height = 0;
				return true;
			}
			int lh = 0, rh = 0;
			if (!isBalanced2(root->left, lh) || !isBalanced2(root->right, rh))
				return false;
			int tmp = lh - rh;
			if (tmp > 1 || tmp < -1) 
				return false;
			height += lh > rh ? lh: rh;
			height++;
			return true;
		}
		bool isBalanced(TreeNode* root) {
			int height = 0;
			return isBalanced2(root, height);
		}
};

int main()
{
	Solution s;
	TreeNode *root = NULL;
	btree_add(&root, 10);
	btree_add(&root, 8);
	btree_add(&root, 7);
	btree_add(&root, 9);
	btree_add(&root, 13);
	btree_add(&root, 11);
	btree_add(&root, 15);
	btree_add(&root, 14);
	//btree_add(&root, 17);
	//btree_add(&root, 19);

	cout << s.isBalanced(root) << endl;
	btree_deinit(&root);
	return 0;
}
