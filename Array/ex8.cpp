//
//  ex8.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3
#define sentinella 0

int main() {
    int i,k;
    int v[N];
    int vero=1;
    int cont=1;
    
    for (i=0; i<N; i++) {
        printf("Inserire valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
//    controllo se ha duplicati:
    for (i=0; i<N; i++) {
        for (k=i+1; k<N; k++) {
            if(v[i]==v[k]){
                printf("0.\n");
                vero=3;
            }
        }
    }
//    controllo se ci sono tutti i numeri:
    for (i=0; i<N; i++) {
        for (k=0; k<N; k++) {
            if(v[i]==v[k]+1)
                cont++;
        }
    }
    if(cont!=(N)&&vero!=3){
        printf("0.\n");
        vero=3;
    }
    if(vero==1)
        printf("1\n");
    return 0;
}
