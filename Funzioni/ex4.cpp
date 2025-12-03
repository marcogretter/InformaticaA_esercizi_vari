//
//  ex4.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10


typedef struct {
    int v[N];
    int cont;
} arrayConCont;

arrayConCont InserimentoElemPari(int v[],arrayConCont nuovo);

int main(){
    int v[N];
    arrayConCont nuovo;
    nuovo.cont=0;
    int i;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore della casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
    nuovo=InserimentoElemPari(v,nuovo);
    
    printf("Il numero di elementi copiati è: %d\n",nuovo.cont);
    for (i=0; i<nuovo.cont; i++) {
        printf("%d\t",nuovo.v[i]);
    }
    printf("\n");
    
    
    
    return 0;
}
arrayConCont InserimentoElemPari(int v[],arrayConCont nuovo)
{
    int i;
    nuovo.cont=0;
    
    for (i=0; i<N; i++) {
        if(v[i]%2==0){
            nuovo.v[nuovo.cont]=v[i];
            nuovo.cont++;
        }
    }
    return nuovo;
}
