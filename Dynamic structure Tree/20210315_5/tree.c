/* Задача 5*/
#include "tree.h"


void deltree(treeNode_t *tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

treeNode_t *insert(int d)
{
    treeNode_t *tmp = (treeNode_t *)malloc(sizeof(treeNode_t));
    treeNode_t *current = NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if (NULL == tree)
    {
        tree = tmp;
    }
    else
    {
        current = tree;
        while (1)
        {
            parent = current;
            if (d < parent->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = tmp;
                    return tmp;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}

treeNode_t *search_rec(treeNode_t *t, int n)
{
    if (t != NULL)
        if (t->data < n)
            t = search_rec(t->right, n);
        else if (t->data > n)
            t = search_rec(t->left, n);
    return t;
}
void preorder(treeNode_t *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}