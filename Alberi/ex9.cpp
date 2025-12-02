//
//  ex9.cpp
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

typedef struct Elemento {
    char parola[30];
    int occorrenze;
    struct Elemento * left, * right;
} Nodo;
typedef Nodo * Tree;

typedef struct El{
    char word[30];
    struct El *next;
} elemento;
typedef elemento *ListaParole;


Tree inserisciOrd(Tree t,char *p)
{
    if(t==NULL){
        t=malloc(sizeof(Nodo));
        t->right=NULL;
        t->left=NULL;
        t->occorrenze=1;
        strcpy(t->parola, p);
    }
    else if (strcpy(p, t->parola)==0)
        t->occorrenze+=1;
    else if (strcpy(p, t->parola)<0)
        t->left=inserisciOrd(t->left, p);
    else
        t->right=inserisciOrd(t->right, p);
    return t;
}
Tree creaIndice( ListaParole l ) {
  Tree t = NULL;
  while( l != NULL ) {
    t = inserisciOrd( t, l->word );
    l = l->next;
   }
    return t;
}
