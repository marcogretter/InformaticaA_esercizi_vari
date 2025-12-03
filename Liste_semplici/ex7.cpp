//
//  ex7.cpp
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

typedef struct Node {
    int numero;
    struct Node * next;
} Nodo;

typedef Nodo * Lista;

Lista InsInFondo( Lista lis,int elem);
void VisualizzaLista( Lista lis );
int visualizzaPicchi(Lista lis);
int verifica(int val1,int val2,int val3);

int main(){
    int v[N]={4,9,12,36,16,23,87,34,18,64,33};
    int i;
    Lista nuova=NULL;
    for (i=0; i<N; i++) {
        nuova=InsInFondo(nuova, v[i]);
    }
    VisualizzaLista(nuova);
    visualizzaPicchi(nuova);
    printf("\n");
    return 0;
}

Lista InsInFondo( Lista lis,int elem ) {
    Lista punt;
    if( lis==NULL ) {
        punt = malloc( sizeof(Nodo) );
        punt->next = NULL;
        punt->numero = elem;
        return punt;
    } else {
        lis->next = InsInFondo( lis->next, elem );
        return lis;
    }
}
void VisualizzaLista( Lista lis ) {
    if ( lis==NULL )
    printf(" ---| \n");
    else {
        printf(" %d\t ---> ", lis->numero);
        VisualizzaLista( lis->next);
    }
}

int visualizzaPicchi(Lista lis)
{
    Lista tmp;
    if(lis==NULL)
        return 0;
    if(lis->next==NULL)
        return lis->numero;
    while (lis->next->next!=NULL) {
        tmp=lis->next;
        if(verifica(lis->numero, tmp->numero, tmp->next->numero))
            printf("%d\t",tmp->numero);
        lis=lis->next;
    }
    return 1;
}
int verifica(int val1,int val2,int val3)
{
    if((val2/2>val1)&&(val2/2>val3))
        return 1;
    return 0;
}
