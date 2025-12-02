//
//  ex5.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20
#define sentinella 0

int main() {
    int n,i;
    int v[N];
    
    printf("Inserisci lunghezza del vettore:\n");
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        printf("Inserisci valore della casella %d su %d:\n",i+1,n);
        scanf("%d",&v[i]);
    }
    for (i=0; i<n; i++) {
        printf("%d\t",v[i]);
    }
    printf("\n");
    
    for (i=1; i<n; i++) {
        if(v[i-1]%2==0)
            printf("%d\t",v[i]);
    }
    printf("\n");
}
