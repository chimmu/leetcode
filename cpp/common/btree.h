#ifndef _BTREE_H_
#define _BTREE_H_ 

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

typedef int DATA;
typedef struct TreeNode BNODE;
int btree_deinit(BNODE **ptree);
int btree_add(BNODE **ptree, const DATA data);
int preorder_traverse(const BNODE *root, void (*visit)(const DATA data));
int backorder_traverse(const BNODE *root, void (*visit)(const DATA data));
int midorder_traverse(const BNODE *root, void (*visit)(const DATA data));
#endif /* _BTREE_H_ */
