//
//  ex17.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct EL {
    int dato;
    struct EL * left, * right;
} node;
typedef node * tree;

int lionese(tree t)
{
    if(t==NULL)
        return 1;
    if(t->left==NULL&&t->right==NULL)
        return 1;
    if(t->left->dato%2==0||t->right->dato%2!=0)
        return 0;
    return lionese(t->right)&&lionese(t->left);
}
