//
//  ex7.cpp
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
    struct EL * left, *right;
} node;

typedef node * tree;
int contaNodi(tree t);

int artussiano(tree t)
{
    if(t==NULL)
        return 1;
    if(t->left==NULL&&t->right==NULL)//il nodo è una foglia restituisco 1.
        return 1;
    if(t->left==NULL)//il nodo ha un figlio, quindi va bene ma devo capire cosa nasconde il figlio
        return artussiano(t->right);
    if(t->right==NULL)//il nodo ha un figlio, quindi va bene ma devo capire cosa nasconde il figlio
        return artussiano(t->left);
    if(contaNodi(t->left)==contaNodi(t->right)&&artussiano(t->left)&&artussiano(t->right))
        return 1;
    return 0;
}
int contaNodi(tree t)
{
    if(t==NULL)
        return 0;
    return 1+contaNodi(t->left)+contaNodi(t->right);
}
