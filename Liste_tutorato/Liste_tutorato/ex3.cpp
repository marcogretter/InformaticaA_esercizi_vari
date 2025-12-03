//
//  ex3.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Scrivere una funzione che data una lista semplicemente concatenata di numeri interi ed un nuovo numero intero lo inserisce nella lista mantenendola ordinata.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50


typedef struct El{
    int info;
    struct El *next;
} elemento;

typedef elemento *lis;

lis InsInOrd( lis lista, int elem );

lis InserisciIntero(lis lista,int M)
{
    if(lista==NULL)
        return NULL;
    while (lista!=NULL) {
        if(M>lista->info)
            lista=InsInOrd(lista, M);
        lista=lista->next;
    }
    return lista;
}
lis InsInOrd( lis lista, int elem ) {
    lis punt, puntCor = lista, puntPrec = NULL;
    while ( puntCor != NULL && elem > puntCor->info ) {
        puntPrec = puntCor; puntCor = puntCor->next;
    }
    punt = (lis) malloc(sizeof(lis));
    punt->info = elem; punt->next = puntCor;
    if ( puntPrec != NULL ) { puntPrec->next = punt; return lista; } else return punt;
}
