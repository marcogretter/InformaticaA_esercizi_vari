//
//  ex4.cpp
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
}Elemento;

typedef Elemento *ListaDiInteri;

ListaDiInteri FirstEven(ListaDiInteri lis);
ListaDiInteri MinEven(ListaDiInteri lis);

ListaDiInteri MinEven(ListaDiInteri lis)
{
    ListaDiInteri tmpEven;
    
    if(lis==NULL)
        return NULL;
    tmpEven=FirstEven(lis);
    while (lis!=NULL) {
        if(lis->s%2==0)
            if(lis->s<tmpEven->s)
                tmpEven=lis;
        lis=lis->next;
    }
    return tmpEven;
}
ListaDiInteri FirstEven(ListaDiInteri lis)
{
    while (lis!=NULL) {
        if(lis->s%2==0)
            return lis;
    }
    return NULL;
}
