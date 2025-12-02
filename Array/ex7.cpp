//
//  ex7.cpp
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
    int i,k;
    int v[N];
    int temp;
    int sum=0,cont=0;
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d su %d:\n",i+1,N);
        scanf("%d",&v[i]);
        sum+=v[i];
        cont++;
        if(sum>=50)
            break;
    }
    temp=v[0];
    if(cont>=3)
    {
        for (i=1; i<cont; i++) {
            for (k=i; k<cont; k++) {
                if(((v[i]%v[k])==0)&&(v[k]*temp==v[i]))
                    printf("(%d,%d) ",v[i],v[k]);
                if(((v[k]%v[i])==0)&&(v[i]*temp==v[k]))
                    printf("(%d,%d) ",v[i],v[k]);
            }
        }
    }
    return 0;
}
