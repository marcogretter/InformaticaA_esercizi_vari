//
//  ex2.cpp
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
    int v[N]={1,2,3,4,5};
    int i;
    int sum=0;
    
    for (i=0; i<N; i++) {
        printf("%d\t",v[N-i-1]);
    }
    printf("\n");
    return 0;
}
