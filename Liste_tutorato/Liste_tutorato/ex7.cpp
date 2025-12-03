//
//  ex7.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Scrivere una funzione che, data una lista, rimuove tutti gli elementi duplicati dalla lista.*/

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
lis scorriListaInBaseAlNumero(lis lista,int info);

lis scorriPrimo(lis lista)
{
    
    if(lista==NULL)
        return NULL;
    while (lista!=NULL) {
        lista=scorriListaInBaseAlNumero(lista, lista->info);
        lista=lista->next;
    }
    return lista;
}
lis scorriListaInBaseAlNumero(lis lista,int info)
{
    if(lista==NULL)
        return lista;
    while (lista!=NULL) {
        if(info==lista->info)
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
