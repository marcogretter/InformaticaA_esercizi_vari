//
//  ex6.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Si consideri una lista semplicemente concatenata. Scrivere una funzione che inverte la lista. Due soluzioni sono possibili:
 1. la funzione alloca in memoria una nuova lista (invertita) e poi decide se eliminare la lista di partenza (a seconda del valore di un parametro);
 2. la funzione riusa i nodi della lista per crearne una nuova invertita.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50


typedef struct El{
    int info;
    struct El *next;
} elemento;

typedef elemento *lis;

lis InsInFondo( lis lista,int elem );

lis InvertiLista(lis lista,int M)
{
    lis nuova=NULL;
    if(lista==NULL)
        return NULL;
    while (lista!=NULL) {
        nuova=InsInFondo(nuova,lista->info);
        lista=lista->next;
    }
    return nuova;
}
lis InsInFondo( lis lista,int elem ) {
    lis punt;
    if( lista==NULL ) {
        punt = malloc(sizeof(lis));
        punt->next = NULL;
        punt->info = elem;
        return punt;
    } else {
        lista->next = InsInFondo( lista->next, elem );
        return lista;
    }
}
