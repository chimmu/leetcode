#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include "btree.h"
/*struct TreeNode {*/
    //DATA data;
    //struct TreeNode *left;
    //struct TreeNode *right;
/*};*/

BNODE *btree_init(void)
{
    return NULL;
}
/**
 * 二级指针的应用
 */
int btree_add(BNODE **ptree, const DATA data)
{
    if (!(*ptree)) {
        BNODE *p = (BNODE *)calloc(1, sizeof(BNODE));
        assert(p);
        p->val = data;
        *ptree = p;
        printf("add %d\n", data);
        return 0;
    }
    if ((*ptree)->val < data) {
        return btree_add(&(*ptree)->right, data);
    } else {
        return btree_add(&(*ptree)->left, data);
    }
    return 0;
}

int preorder_traverse(const BNODE *root, void (*visit)(const DATA data))
{
    if (root) {
        if (visit)
            visit(root->val);
        preorder_traverse(root->left, visit);
        preorder_traverse(root->right, visit);
    }
    return 0;
}

int backorder_traverse(const BNODE *root, void (*visit)(const DATA data))
{
    if (root) {
        backorder_traverse(root->left, visit);
        backorder_traverse(root->right, visit);
        if (!root) return 0;
        if (visit)
            visit(root->val);
   }
    return 0;
}

int midorder_traverse(const BNODE *root, void (*visit)(const DATA data))
{
    if (root) {
        midorder_traverse(root->left, visit);
        if (!root) return 0;
        if (visit)
            visit(root->val);
        midorder_traverse(root->right, visit);
    }
    return 0;
}
int btree_deinit(BNODE **ptree)
{
    if (*ptree) {
        BNODE *pleft = (*ptree)->left;
        BNODE *pright = (*ptree)->right;
        free(*ptree);
        *ptree = NULL;
        btree_deinit(&pleft);
        btree_deinit(&pright);
    }
    return 0;
}

void visit(const DATA data)
{
   printf("%d ", data); 
}
#if 0
int main(void)
{
    BNODE *root = btree_init();
    int i = 0;

    srand(time(NULL));
    for (i = 0; i < 10; i++)
        btree_add(&root, rand() % 100);
    printf("preorder...\n");
    preorder_traverse(root, visit);
    printf("\nbackorder...\n");
    backorder_traverse(root, visit);
    printf("\nmidorder...\n");
    midorder_traverse(root, visit);
    printf("\n");
    btree_deinit(&root);
    return 0;
}
#endif
