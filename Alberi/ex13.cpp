//
//  ex13.cpp
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

int valFoglia(tree t);
int esploraAlbero(tree t, int somma);
int fTA(tree TA,tree TB);
int fTB(tree TA,tree TB);

int f(tree TA,tree TB)
{
    if(fTA(TA, TB)==1)
        return 1;
    if(fTB(TA, TB)==1)
        return 1;
    return 0;
}
int fTB(tree TA,tree TB)
{
    int somma=valFoglia(TB);
    if(esploraAlbero(TA, somma))
        return 1;
    return 0;
}
int fTA(tree TA,tree TB)
{
    int somma=valFoglia(TA);
    if(esploraAlbero(TB, somma))
        return 1;
    return 0;
}
int esploraAlbero(tree t, int somma)
{
    if(t==NULL)
        return 0;
    if(t->dato==somma)
        return 1;
    return esploraAlbero(t->right, somma)+esploraAlbero(t->left, somma);
}
int valFoglia(tree t)
{
    if(t==NULL)
        return 0;
    if(t->right==NULL&&t->left==NULL)
        return t->dato;
    return valFoglia(t->right)+valFoglia(t->left);
}
