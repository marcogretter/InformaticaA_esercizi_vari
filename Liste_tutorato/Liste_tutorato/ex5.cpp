//
//  ex5.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Si consideri una lista semplicemente concatenata. Scrivere una funzione che elimina i primi i elementi della lista.*/

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

lis NumeroElemDaEliminare(lis lista,int M)
{
    int cont=0;
    if(lista==NULL)
        return NULL;
    while (lista!=NULL) {
        if(M>cont)
            lista=Cancella(lista, lista->info);
        cont++;
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
