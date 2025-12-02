//
//  ex6.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100
#define sentinella 0

int main() {
    int k,i;
    int v[N];
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
    for (i=0; i<N; i++) {
        for (k=i; k<N; k++) {
            if(v[i]==2*v[k]||2*v[i]==v[k])
                printf("(%d,%d),",v[i],v[k]);
        }
    }
    printf("\n");
    return 0;
}
