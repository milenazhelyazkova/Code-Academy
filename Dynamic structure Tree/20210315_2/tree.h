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

void insertKey(int x, treeNode_t **tree);
void printRight(treeNode_t *tree);
void printLeft(treeNode_t *tree);
void deltree(treeNode_t *tree);

