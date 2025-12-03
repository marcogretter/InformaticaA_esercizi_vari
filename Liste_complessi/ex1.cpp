//
//  main.cpp
//  Liste_complessi
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 5

typedef struct Elem {
    int dato;
    struct Elem * next;
} Nodo;

typedef Nodo * Lista;
Lista Cancella( Lista lista, int elem );
Lista InsInFondo( Lista lista,int elem );
Lista trovaCosaManca(Lista lis,int *v,int n);
int esploraLista(Lista lis,int elem);
void incrocia(Lista lis,int *v,int n);
int trovaValore(int elem,int *v,int n);
Lista InsInTesta ( Lista lista, int elem );

int main(){
    int v[N]={1,2,3,4,5};
    int n;
    Lista nuova=NULL;
    printf("Quanto è grande il vettore?\n");
    scanf("%d",&n);
    
    incrocia(nuova, v, n);
    
}
void incrocia(Lista lis,int *v,int n)
{
    int i;
    Lista nuova=NULL;
    nuova=trovaCosaManca(lis, v, n);
    if(lis==NULL){
        for (i=0; i<n; i++) {
            lis=InsInFondo(lis, v[i]);
        }
    }
    if(lis!=NULL){
        if(trovaValore(lis->dato, v, n)==0)
            lis=Cancella(lis, lis->dato);
    }
    while (nuova!=NULL) {
        lis=InsInFondo(lis, nuova->dato);
        nuova=nuova->next;
    }
}
Lista trovaCosaManca(Lista lis,int *v,int n)
{
    int i;
    Lista nuova=NULL;
    for (i=0; i<n; i++) {
        if(esploraLista(lis, v[i])==0){
            nuova=InsInTesta(nuova, v[i]);
        }
    }
    return nuova;
}
int esploraLista(Lista lis,int elem)
{
    if(lis==NULL)
        return 0;
    while (lis!=NULL) {
        if(lis->dato==elem)
            return 1;
        lis=lis->next;
    }
    return 0;
}
int trovaValore(int elem,int *v,int n)
{
    int i;
    for (i=0; i<n; i++) {
        if(v[i]==elem)
            return 0;
    }
    return 1;
}
Lista Cancella( Lista lista, int elem ) {
    Lista puntTemp;
    if( lista!=NULL)
        if( lista->dato == elem ) {
            puntTemp = lista->next;
            free( lista );
            return puntTemp; // per cancellare tutte le istanze: return Cancella(PuntTemp, Elem);
        }
        else
            lista->next = Cancella( lista->next, elem );
        return lista;
}
Lista InsInFondo( Lista lista,int elem ) {
    Lista punt;
    if( lista==NULL ) {
        punt = malloc( sizeof(Nodo) );
        punt->next = NULL;
        punt->dato = elem;
        return punt;
    } else {
        lista->next = InsInFondo( lista->next, elem );
        return lista;
    }
}
Lista InsInTesta ( Lista lista, int elem ) {
    Lista punt;
    punt = malloc(sizeof(Nodo));
    punt->dato = elem;
    punt->next = lista;
    return punt;
}
