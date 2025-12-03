//
//  ex16.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10

int somma(int vett [], int k);

int main(){
    int v[N],i,k;
    int som;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d",i,N);
        scanf("%d",&v[i]);
    }
    printf("Da quale casella vuoi verificare il vettore?\n");
    scanf("%d",&k);
    
    if(somma(v, k))
        printf("Il vettore soddisfa le condizioni.\n");
    else
        printf("Il vettore NON soddisfa le condizioni.\n");
    
    return 0;
}
int somma(int vett [], int k)
{
    int i,sum=0;
    for (i=k; i<N; i++) {
        sum+=vett[i];
    }
    if(sum>vett[k])
        return 1;
    return 0;
}
