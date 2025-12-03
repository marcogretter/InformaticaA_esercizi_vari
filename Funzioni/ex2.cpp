//
//  ex2.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10

typedef int VT[N];

typedef struct{
    int pari;
    int dispari;
} somma;

int ft(VT A,somma sum);

int main(){
    
    VT v;
    somma sum;
    int i;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
    printf("La somma degli elementi dell'array è: %d\n",ft(v, sum));
    
    
    return 0;
}
int ft(VT A,somma sum)
{
    sum.pari=0;
    sum.dispari=0;
    int i;
    for (i=0; i<N; i++) {
        if(A[i]%2==0)
            sum.pari+=A[i];
        else
            sum.dispari+=A[i];
    }
    return sum.pari+sum.dispari;
}
