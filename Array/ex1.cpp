//
//  main.cpp
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
/*Scrivere un programma in C che legge un vettore di interi di dimensione fissata e ne stampa la somma*/
int main() {
    int v[N]={1,2,3,4,5};
    int i;
    int sum=0;
    
    for (i=0; i<N; i++) {
        sum+=v[i];
    }
    printf("La somma è: %d\n",sum);
    return 0;
}
