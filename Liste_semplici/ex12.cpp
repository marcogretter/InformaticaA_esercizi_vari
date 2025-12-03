//
//  ex12.cpp
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
} Elemento;

typedef Elemento *Lista;

Lista InsInFondo( Lista lis,int elem );
void VisualizzaLista( Lista lis );
Lista eliminaIEl(Lista lis,int num);

int main(){
    int v[N];
    int i,num;
    Lista nuova=NULL;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
    for (i=0; i<N; i++) {
        nuova=InsInFondo(nuova, v[i]);
    }
    VisualizzaLista(nuova);
    printf("Quanti elementi vuoi eliminare?\n");
    scanf("%d",&num);
    printf("Lista dopo aver eliminato %d elementi:\n",num);
    nuova=eliminaIEl(nuova, num);
    VisualizzaLista(nuova);
    return 0;
}
Lista eliminaIEl(Lista lis,int num)
{
    int i;
    for (i=0; i<num; i++) {
        lis=lis->next;
    }
    return lis;
}
Lista InsInFondo( Lista lis,int elem ) {
    Lista punt;
    if( lis==NULL ) {
        punt = malloc( sizeof(Elemento) );
        punt->next = NULL;
        punt->s = elem;
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
        printf(" %d\t ---> ", lis->s);
        VisualizzaLista( lis->next);
    }
}
