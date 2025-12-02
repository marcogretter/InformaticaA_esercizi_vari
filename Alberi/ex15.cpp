//
//  ex15.h
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ET {
    int dato;
    struct ET * left, * center, * right;
} treeNode;
typedef treeNode * tree;


int cerca(tree t, int totale)
{
    if(t==NULL&&totale==0)
        return 1;
    if(t==NULL||totale==0)
        return 0;
    if(t->dato-totale==0)
        return 1;
    return (cerca(t->right, totale-t->dato)&&cerca(t->left, totale-t->dato))||(cerca(t->right, totale-t->dato)&&cerca(t->center, totale-t->dato))||(cerca(t->left, totale-t->dato)&&cerca(t->center, totale-t->dato));
}
