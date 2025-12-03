//
//  ex9.cpp
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

typedef struct El {
    int s;
    struct El *next;} Elemento;

typedef Elemento *Lista;
Lista RestituisciTerPos(Lista lis);

void foo(Lista l,int el)
{
    Lista tmp,new;
    tmp=RestituisciTerPos(l);
    if(tmp!=NULL){
        new=malloc(sizeof(Elemento));
        new->next=tmp->next;
        new->s=el;
        tmp->next=new;
    }
}
Lista RestituisciTerPos(Lista lis)
{
    int cont=0;
    if(lis==NULL)
        return NULL;
    while (lis!=NULL) {
        cont++;
        if(cont==3)
            return lis;
        lis=lis->next;
    }
    return NULL;
}
