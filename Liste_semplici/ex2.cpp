//
//  ex2.cpp
//  Liste_semplici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Nodo {
        int valore;
        struct Nodo *prox;
} nodo;
typedef nodo *lista;

lista radice;

int elemMax(lista lis)
{
    int tmpMax,temp;
    lista next;
//    base
    if(lis==NULL)
        return 1;
    if(lis->prox==NULL)
        return lis->valore;
    temp=elemMax(lis->prox);
//    passo
    if(temp>lis->valore)
        return temp;
    else
        return lis->valore;
}
