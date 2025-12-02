//
//  ex11.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 200
#define sentinella 0

int main() {
    int n;
    int i,k=1;
    int v[N];
    do{
        printf("Inserire un numero maggiore di 1:\n");
        scanf("%d",&n);
    }while(n<2);
    
    for (i=0; i<n; i++) {
        v[i]=k;
        k++;
    }
    for (i=0; i<n; i++) {
        printf("%d\t",v[i]);
    }
    printf("\n");
    for (i=1; i<n; i++) {
        for (k=i; k<n; k++) {
            if(v[k+1]%v[i]==0)
                v[k+1]=0;
        }
    }
    for (i=0; i<n; i++) {
        if(v[i]==0)
            printf("X\t");
        else
            printf("%d\t",v[i]);
    }
    printf("\n");
    return 0;
}
