//
//  ex6.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 4
#define M 5

int main() {
    int Mat[N][M];
    int r,c;
    int cont=0;
    
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            printf("Inserisci valore della casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&Mat[r][c]);
        }
    }
    
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            if((Mat[r][c]+Mat[r+1][c+1])==(Mat[r][c+1]+Mat[r+1][c]))
               cont++;
        }
    }
    printf("Il numero di claque è: %d\n",cont);
    return 0;
}
