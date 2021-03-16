/* Задача 3 */
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

treeNode_t *insert(int d);
void deltree(treeNode_t *tree);
void preorder(treeNode_t *n);
