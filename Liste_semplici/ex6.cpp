//
//  ex6.cpp
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

typedef struct Node {
    int numero;
    struct Node * next;
} Nodo;

typedef Nodo * Lista;

int monCresc(Lista lis)
{
    if(lis==NULL)
        return 1;
    if(lis->next==NULL)
        return 1;
    while (lis->next!=NULL) {
        if(lis->numero>lis->next->numero)
            return 0;
        lis=lis->next;
    }
    return 1;
}
