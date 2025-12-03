//
//  main.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10

int prodotto(int v[]);

int main(){
    int A[N];
    int i;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&A[i]);
    }
    
    for (i=0; i<N; i++) {
        printf("%d\t",A[i]);
    }
    printf("\n");
    
    
    for (i=0; i<N; i++) {
        printf("%d\t",A[N-1-i]);
    }
    printf("\n");
    
    printf("Il prodotto degli elementi del vettore è: %d\n",prodotto(A));
    
    return 0;
}

int prodotto(int v[])
{
    int prod=1;
    int i;
    
    for (i=0; i<N; i++) {
        prod*=v[i];
    }
    return prod;
}
