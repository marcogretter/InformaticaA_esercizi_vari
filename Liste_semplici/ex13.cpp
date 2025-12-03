//
//  ex13.cpp
//  Liste_semplici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 5

typedef struct El {
    int s;
    struct El *next;
} Elemento;

typedef Elemento *Lista;

Lista InsInOrd( Lista lis, int elem ) {
    Lista punt, puntCor = lis, puntPrec = NULL;
    while ( puntCor != NULL && elem > puntCor->s ) {
        puntPrec = puntCor; puntCor = puntCor->next;
    }
    punt = malloc(sizeof(Elemento));
    punt->s = elem; punt->next = puntCor;
    if ( puntPrec != NULL ) { puntPrec->next = punt; return lis; } else return punt;
}
