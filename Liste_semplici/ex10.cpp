//
//  ex10.cpp
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
    struct El *next;
} Elemento;

typedef Elemento *Lista;

Lista UltimoMagg(Lista lis, int el)
{
    if(lis==NULL)
        return NULL;
    while (lis->next!=NULL) {
        if(lis->next->s<el)
            return lis;
        lis=lis->next;
    }
    return NULL;
}

void foo(Lista l,int el)
{
    Lista new,tmp;
    tmp=UltimoMagg(l, el);
    if(tmp!=NULL){
        new=malloc(sizeof(Elemento));
        new->s=el;
        new->next=tmp->next;
        tmp->next=new;
    }
}
