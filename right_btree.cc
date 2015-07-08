#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void insert(TreeNode **root, int data) 
{
	if (!*root) {
		*root = new TreeNode(data);
		return;
	} else {
		if (data > (*root)->val)
			insert(&(*root)->right, data);
		else
			insert (&(*root)->left, data);
	}
}

void traverse(TreeNode *root)
{
	if (root) {
		traverse(root->left);
		printf("%d ", root->val);
		traverse(root->right);
	}
}
class Solution {
	public:
    vector<int> rightSideView(TreeNode *root) {
        vector<int> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            res.push_back(q.back()->val);
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                TreeNode *node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return res;
    }
};

int main()
{
	TreeNode *root = NULL;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		insert(&root, rand() % 100);
	}
	traverse(root);
	cout << endl;
	Solution s;
	cout << "vector..." << endl;
	vector<int> vec = s.rightSideView(root);
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		printf("%d ", *iter);
	}
	cout << endl;
}
