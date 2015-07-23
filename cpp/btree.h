#ifndef _BTREE_H_
#define _BTREE_H_ 

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


#endif /* _BTREE_H_ */
