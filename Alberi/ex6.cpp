//
//  ex6.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

struct Knot;
typedef struct Knot * Albero;
typedef struct Branch {
    Albero child;
    struct Branch * next;
} Ramo;

typedef struct Knot {
    int  dato;
    Ramo * rami;
} Nodo;
//Dichiarazione funzioni:
int contaRami(Ramo *r);
int conta(Albero t);

//Sviluppo funzioni:
int conta(Albero t)
{
    if(t==NULL)
        return 0;
    return 1+contaRami(t->rami);
}
int contaRami(Ramo *r)
{
    if(r==NULL)
        return 0;
    return conta(r->child)+contaRami(r->next);
}
