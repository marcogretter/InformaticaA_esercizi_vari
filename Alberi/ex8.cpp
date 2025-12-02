//
//  ex8.cpp
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

typedef struct ELLista {
    tree foglia;
    struct ELLista * next; } nodeLista;
typedef nodeLista * Lista;
//Dichiarazione funzioni:
Lista InsInFondo( Lista lista,tree elem );
Lista f(tree t);
//Sviluppo funzioni:
Lista f(tree t)
{
    Lista nuova=NULL;
    if(t==NULL)
        return nuova;
    if(t->left==NULL&&t->right==NULL)
        nuova=InsInFondo(nuova, t);
    if(t->left==NULL)
        return f(t->right);
    if(t->right==NULL)
        return f(t->left);
    nuova=f(t->left);
    nuova=f(t->right);
    return nuova;
}
Lista InsInFondo( Lista lista,tree elem ) {
    Lista punt;
    if( lista==NULL ) {
        punt = malloc( sizeof(nodeLista) );
        punt->next = NULL;
        punt->foglia = elem;
        return punt;
    } else {
        lista->next = InsInFondo( lista->next, elem );
        return lista;
    }
}
