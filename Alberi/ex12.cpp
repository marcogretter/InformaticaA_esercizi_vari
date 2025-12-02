//
//  ex12.cpp
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

int nodi(tree t,int n);
int profondità(tree t);
void aux(tree t,int n,int *v);

int f(tree t)
{
    if(t==NULL)
        return 1;
    return nodi(t, 0);
}
int nodi(tree t,int n)
{
    int numLivelli,cont=0;
    numLivelli=profondità(t);
    int v[numLivelli],i;
    for (i=0; i<numLivelli; i++) {
        v[i]=0;
    }
    aux(t, n, v);
    for (i=0; i<numLivelli; i++) {
        if(v[i]==0)
            return 0;
    }
    return 1;
}
int profondità(tree t)
{
    if(t==NULL)
        return 0;
    int D,S;
    D=profondità(t->right);
    S=profondità(t->left);
    if(D>S)
        return D+1;
    return S+1;
}
void aux(tree t,int n,int *v)
{
    if(t==NULL)
        return;
    if(t->dato%2==n%2)
        v[n]=1;
    aux(t->right, n+1, v);
    aux(t->left, n+1, v);
}
