//
//  ex10.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

int main() {
    int M[N][N];
    int r,c,i;
    int contr=0,contc=0;
//    chiedo la matrice all'utente:
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("%d\t",M[r][c]);
        }
        printf("\n");
    }
    
//    la leggo a spirale:
    for (c=0; c<N/2+1; c++) {
        for (r=c; r<N-c; r++) {
            printf("%d",M[c][r]);
        }
        for (r=c+1;r<N-c ; r++) {
            printf("%d",M[r][N-1-c]);
        }
        for (r=N-2-c; r>=c; r--) {
            printf("%d",M[N-1-r][c]);
        }
        for (r=N-2-c; r>=c+1; r--) {
            printf("%d",M[r][c]);
        }
    }
    printf("\n");
    return 0;
}
