//
//  ex14.cpp
//  Liste_semplici
//
//  Created by Marco Gretter on 03/12/25.
//
/*Definire una funzione foo che, data una ListaDiInteri ℓ ed un intero el,
inserisce quest’ultimo tra i primi due elementi consecutivi che siano, rispettivamente,
strettamente minore e strettamente maggiore di el. Se la lista ℓ non contiene due
elementi consecutivi siffatti, la procedura inserisce el in testa.*/

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

typedef Elemento *ListaDiInteri;
ListaDiInteri InsInTesta ( ListaDiInteri lista, int elem );
void foo(ListaDiInteri l,int el);

ListaDiInteri trovaValComp(ListaDiInteri lis,int el)
{
    if(lis==NULL)
        return NULL;
    while (lis->next!=NULL) {
        if(lis->s<el&&lis->next->s>el)
            return lis;
        lis=lis->next;
    }
    return NULL;
}
void foo(ListaDiInteri l,int el)
{
    ListaDiInteri tmp,new;
    tmp=trovaValComp(l, el);
    if(tmp==NULL){
        new=InsInTesta(l, el);
    }
    if(tmp!=NULL){
        new=malloc(sizeof(Elemento));
        new->s=el;
        new->next=tmp->next;
        tmp->next=new;
    }
}
ListaDiInteri InsInTesta ( ListaDiInteri lista, int elem ) {
    ListaDiInteri punt;
    punt = malloc(sizeof(Elemento));
    punt->s = elem;
    punt->next = lista;
    return punt;
}
