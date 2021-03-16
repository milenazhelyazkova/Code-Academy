/* Задача 5 */
#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;
struct treeNode_t
{
    int data;
    treeNode_t *left;
    treeNode_t *right;
};

extern treeNode_t *tree;

void deltree(treeNode_t *tree);
treeNode_t *insert(int d);
void preorder(treeNode_t *n);
treeNode_t *search_rec(treeNode_t *t, int n);
