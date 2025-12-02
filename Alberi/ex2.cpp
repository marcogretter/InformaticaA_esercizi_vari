//
//  ex2.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef struct EL {
    int dato;
    struct EL * left, * right;
} node;
typedef node * tree;

//dichiarazione funzioni:
int maxPunti(tree t);
int esisteCammino(tree t,int k);
//sviluppo funzioni:
int maxPunti(tree t)
{
    if(t==NULL)
        return 0;
    int D,S;
    D=maxPunti(t->right);
    S=maxPunti(t->left);
    if(D>S)
        return D+t->dato;
    return S+t->dato;
}
int esisteCammino(tree t,int k)
{
    if(t==NULL&&k==0)
        return 1;
    if(t==NULL)
        return 0;
    if(k-t->dato<0)
        return 0;
    if(t->right==NULL)
        return esisteCammino(t->left, k-t->dato);
    if(t->left==NULL)
        return esisteCammino(t->right, k-t->dato);
    return (esisteCammino(t->right, k-t->dato)||esisteCammino(t->left, k-t->dato));
}
