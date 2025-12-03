//
//  ex8.cpp
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
    int len;
    int r,c;
    int i;
    int cont=0;
    int differenza;
    int durata=0;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    do{
        printf("Inserisci valore di len:\n");
        scanf("%d",&len);}while(len<1);
    
    if(len==1)
        printf("OK");
//    controllo colonne:
    for (r=0; r<N; r++) {
        differenza=M[r][1]-M[r][0];
        durata=1;
        for (c=2; c<N; c++) {
            if(M[r][c]-M[r][c-1]==differenza)
                durata++;
            else{
                differenza=M[r][c]-M[r][c-1];
                durata=1;
            }
            if(durata==len-1){
                printf("OK\n");
                return 1;
            }
        }
    }
//    controllo righe:
    for (c=0; c<N; c++) {
        differenza=M[1][c]-M[0][c];
        durata=1;
        for (r=2; r<N; r++) {
            if(M[r][c]-M[r-1][c]==differenza)
                durata++;
            else{
                differenza=M[r][c]-M[r-1][c];
                durata=1;
            }
            if(durata==len-1){
                printf("OK\n");
                return 1;
            }
        }
    }
    printf("NON OK\n");
    return 0;
}
