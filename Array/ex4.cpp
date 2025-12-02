//
//  ex4.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10
#define sentinella 0

int convertiInBinario(int n);
int main() {
    int i;
    int v[N],r[N];
    int sum=0;
    
    for (i=0; i<N; i++) {
        do {
            printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
            scanf("%d",&v[i]);
        } while (v[i]<0||v[i]>1023);
    }
    
    for (i=0; i<N; i++) {
        r[i]=convertiInBinario(v[i]);
    }
    for (i=0; i<N; i++) {
        printf("%d\t",r[i]);
    }
    printf("\n");
    
    return 0;
}
int convertiInBinario(int n)
{
    int sum=0;
    while(n>=1){
        if(n%2==0){
            n=n/2;
        }
        if(n%2!=0){
            sum+=1;
            n=n/2;
        }
    }
    return sum;
}
