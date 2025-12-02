//
//  ex3.cpp
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

typedef struct ELLista {
    tree foglia;
    struct ELLista * next;
} nodeLista;

typedef nodeLista * Lista;
//dichiarazione funzioni:
Lista InsInFondo( Lista lista,tree elem );
Lista InserisciFoglie(tree t,Lista lis);
//Sviluppo funzioni:
Lista InserisciFoglie(tree t,Lista lis)
{
    if(t==NULL)
        return NULL;
    lis=InsInFondo(lis, t);
    
    if(t->right==NULL&&t->left==NULL)
        return lis;
    if(t->right==NULL)
        return InserisciFoglie(t->left, lis);
    if(t->left==NULL)
        return InserisciFoglie(t->right, lis);
    
    lis=InserisciFoglie(t->right, lis);
    lis=InserisciFoglie(t->left, lis);
    return lis;
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
