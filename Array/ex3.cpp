//
//  ex3.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 5
#define sentinella 0


int main() {
    int v[N]={3,2,5,4,4};
    int i,k;
    int vero=1;
    
    for (i=0; i<N; i++) {
        for (k=i+1; k<N; k++) {
            if(v[i]==v[k]){
                printf("0\n");
                vero=3;
            }
        }
    }
    if(vero==1)
        printf("1\n");
    return 0;
}
