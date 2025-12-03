//
//  ex2.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50

int main() {
    int r,c;
    int M[N][N];
    int cont=0;
    
    for (r=0; r<N; r++) {
        cont=0;
        for (c=0; c<N; c++) {
            if(cont<2){
                printf("Inserisci valore per la casella di riga %d, colonna %d:\n",r+1,c+1);
                scanf("%d",&M[r][c]);
            }
            if(cont>=2)
                M[r][c]=0;
            if(M[r][c]<0)
                cont++;
        }
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("%d\t",M[r][c]);
        }
        printf("\n");
    }
