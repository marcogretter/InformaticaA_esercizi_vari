//
//  ex8.cpp
//  Liste_semplici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 11

typedef struct EL {
    int valore;
    struct EL * next;
} Nodo;

typedef Nodo * Lista;

int lungListe(Lista lis);
int equipotenti (Lista L1,Lista L2);

int equipotenti ( Lista L1, Lista L2 )
{
    int lun1, lun2,contL1=0,contL2=0;
    lun1=lungListe(L1);
    lun2=lungListe(L2);
    if(lun1!=lun2)
        return 0;
    while (L1!=NULL) {
        if(L1->valore>L2->valore)
            contL1++;
        if(L1->valore<L2->valore)
            contL2++;
        L1=L1->next;
        L2=L2->next;
    }
    if(contL1==contL2)
        return 1;
    return 0;
}
int lungListe(Lista lis)
{
    int cont=0;
    if(lis==NULL)
        return 0;
    while (lis!=NULL) {
        cont++;
        lis=lis->next;
    }
    return cont;
}
