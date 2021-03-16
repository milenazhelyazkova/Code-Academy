/* Задача 4*/
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
treeNode_t *search(int d)
{
    treeNode_t *current = tree;
    printf("Visiting elements: ");
    while (current->data != d)
    {
        if (current != NULL)
            printf("%d, ", current->data);
        if (current->data > d)
            current = current->left;
        else
            current = current->right;
        if (current == NULL)
            return NULL;
    }
    return current;
}

int del(int n)
{
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if (current->right == NULL && current->left != NULL)
    {
        printf("To be del =%d\n", current->left->data);
        current = current->left;
        free(current);
        parent->left = NULL;
    }
    else if (current->right != NULL && current->left == NULL)
    {
        printf("del =%d\n", current->right->data);
        current = current->right;
        free(current);
        parent->right = NULL;
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

void preorder(treeNode_t *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

void dellEnd(int *n)
{
    treeNode_t *q;
    treeNode_t *p = tree;

    while (p->right != NULL)
    {
        q = p;
        p = p->right;
    }
    *n = p->data;
    q->right = NULL;
    free(p);
}