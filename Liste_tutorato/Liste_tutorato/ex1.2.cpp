//
//  ex1.2.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Si consideri una coda (queue) di interi. Si scrivano le seguenti funzioni:
 enqueue: inserisce in coda un nuovo intero ricevuto in input
 dequeue: legge e cancella il primo elemento della coda*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50


typedef struct El{
    int info;
    struct El *prox;
} elemento;

typedef elemento *lis;

lis InsInFondo( lis lista,int elem );
lis Cancella( lis lista, int elem );

lis enqueue(lis lista,int elem)
{
    if(lista==NULL)
        return lista;
    while (lista!=NULL) {
        lista=InsInFondo(lista, elem);
    }
    return lista;
}
lis dequeue(lis lista)
{
    if(lista==NULL)
        return NULL;
    lista=Cancella(lista, lista->info);
    return lista;
}
lis Cancella( lis lista, int elem ) {
    lis puntTemp;
    if( lista!=NULL)
        if( lista->info == elem ) {
            puntTemp = lista->prox;
            free( lista );
            return puntTemp; // per cancellare tutte le istanze: return Cancella(PuntTemp, Elem);
        }
        else
            lista->prox = Cancella( lista->prox, elem );
        return lista;
}


lis InsInFondo( lis lista,int elem ) {
    lis punt;
    if( lista==NULL ) {
        punt = malloc( sizeof(lis) );
        punt->prox = NULL;
        punt->info = elem;
        return punt;
    } else {
        lista->prox = InsInFondo( lista->prox, elem );
        return lista;
    }
}
