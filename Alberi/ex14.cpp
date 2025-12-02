//
//  ex14.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ET {
    char * dato;
    struct ET * left, * right;
} treeNode;
typedef treeNode * tree;

typedef struct EL {
    char * dato;
    struct EL * next;
} listNode;
typedef listNode * list;

int profondita(tree t);
void verificaPres(tree t,list lis,int v[],int numLivelli);

int contains (tree t, char * word)
{
    if(t==NULL)
        return 0;
    if(strcpy(t->dato, word)==0)
        return 1;
    return contains(t->right, word)+contains(t->left, word);
}
int isContained (tree t, list l)
{
    int numLivelli=profondita(t);
    int v[numLivelli],i;
    for (i=0; i<numLivelli; i++) {
        v[i]=0;
    }
//    Chiamata aux:
    verificaPres(t, l, v, 0);
    for (i=0; i<numLivelli; i++) {
        if(v[i]==0)
            return 0;
    }
    return 1;
}
void verificaPres(tree t,list lis,int v[],int numLivelli)
{
    int i;
    while (lis!=NULL) {
        if(strcpy(t->dato, lis->dato)==0)
            v[numLivelli]=1;
        lis=lis->next;
    }
    verificaPres(t->right, lis, v, numLivelli+1);
    verificaPres(t->left, lis, v, numLivelli+1);
}
int profondita(tree t)
{
    int D,S;
    if(t==NULL)
        return 0;
    D=profondita(t->right);
    S=profondita(t->left);
    if(D>S)
        return 1+D;
    return 1+S;
}
