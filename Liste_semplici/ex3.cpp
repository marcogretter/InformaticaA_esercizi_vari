//
//  ex3.cpp
//  Liste_semplici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 50

typedef struct El {
    int s;
    struct El *next;
} ElementoLista;

typedef ElementoLista *ListaDiInteri;

ListaDiInteri FirstEven(ListaDiInteri lis)
{
    if(lis==NULL)
        return NULL;
    while (lis!=NULL) {
        if(lis->s%2==0)
            return lis;
        lis=lis->next;
    }
    return NULL;
}
