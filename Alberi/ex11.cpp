//
//  ex11.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct EL {
    int dato;
    struct EL * left, * right;
} node;

typedef node * tree;

int controllo(tree t,int n);

int f(tree t)
{
    if(t==NULL)
        return 1;
    return controllo(t, 0);
}

int controllo(tree t,int n)
{
    if(t==NULL)
        return 1;
    
    if(t->dato%2!=0&&n%2==0)
        return 0;
    if(t->dato%2==0&&n%2!=0)
        return 0;
    if(t->left==NULL&&t->right==NULL)
        return 1;
    return controllo(t->right, n+1)&&controllo(t->left, n+1);
}
