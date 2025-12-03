//
//  ex4.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Scrivere una funzione che cancella un elemento di una lista (si assuma l’elemento sia identificato da un intero).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50


typedef struct El{
    int info;
    struct El *next;
} elemento;

typedef elemento *lis;

lis Cancella( lis lista, int elem );

lis TrovaElemDaCancellare(lis lista,int M)
{
    if(lista==NULL)
        return NULL;
    while (lista!=NULL) {
        if(M==lista->info)
            lista=Cancella(lista, lista->info);
        lista=lista->next;
    }
    return lista;
}
lis Cancella( lis lista, int elem ) {
    lis puntTemp;
    if( lista!=NULL)
        if( lista->info == elem ) {
            puntTemp = lista->next;
            free( lista );
            return puntTemp; // per cancellare tutte le istanze: return Cancella(PuntTemp, Elem);
        }
        else
            lista->next = Cancella( lista->next, elem );
        return lista;
}
