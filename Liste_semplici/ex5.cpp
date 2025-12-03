//
//  ex5.cpp
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
}Elemento;

typedef Elemento *ListaDiInteri;

void VisualizzaLista( ListaDiInteri lista );
ListaDiInteri ListaOrdinata(int v[]);
ListaDiInteri InsInTesta ( ListaDiInteri lista, int elem );
ListaDiInteri InsInFondo( ListaDiInteri lista,int elem );
ListaDiInteri contrario(ListaDiInteri lis);

int main(){
    int v[N];
    int i;
    ListaDiInteri nuova=NULL;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
//    lista ordinata:
    nuova=ListaOrdinata(v);
    VisualizzaLista(nuova);
    printf("\n");
//    lista al contrario:
    nuova=contrario(nuova);
    VisualizzaLista(nuova);
    
    return 0;
}
ListaDiInteri contrario(ListaDiInteri lis)
{
    ListaDiInteri nuova=NULL;
    if(lis==NULL)
        return NULL;
    while (lis!=NULL) {
        nuova=InsInTesta(nuova, lis->s);
        lis=lis->next;
    }
    return nuova;
}

ListaDiInteri ListaOrdinata(int v[])
{
    ListaDiInteri nuova=NULL;
    int i;
    for (i=0; i<N; i++) {
        nuova=InsInFondo(nuova, v[i]);
    }
    return nuova;
}

ListaDiInteri InsInTesta ( ListaDiInteri lista, int elem ) {
    ListaDiInteri punt;
    punt = malloc(sizeof(Elemento));
    punt->s = elem;
    punt->next = lista;
    return punt;
}
ListaDiInteri InsInFondo( ListaDiInteri lista,int elem ) {
    ListaDiInteri punt;
    if( lista==NULL ) {
        punt = malloc( sizeof(Elemento) );
        punt->next = NULL;
        punt->s = elem;
        return punt;
    } else {
        lista->next = InsInFondo( lista->next, elem );
        return lista;
    }
}
void VisualizzaLista( ListaDiInteri lista ) {
    if ( lista==NULL )
    printf(" ---| \n");
    else {
        printf(" %d\t ---> ", lista->s);
        VisualizzaLista( lista->next );
    }
}
