//
//  tutor2.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2
#define M 3
/*Scrivere un programma che chiede all’utente di inserire una matrice di interi 20 × 30, poi esegue le seguenti operazioni:
 Calcola quante sotto-matrici quadrate 2 × 2 hanno somma degli elementi pari a zero
 Calcola quante sotto-matrici quadrate di dimensione qualsiasi hanno somma degli elementi pari a zero*/

int main(){
    int matr[N][M];
    int r,c;
    int u,v;
    int cont=0;
    int s=0;
    int sum=0;
    
//    chiedo di inserire la matrice:
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            printf("Inserisci valore:\n");
            scanf("%d",&matr[r][c]);
        }
    }
//    stampo la matrice:
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            printf("%d\t",matr[r][c]);
        }
        printf("\n");
    }
//    sottomatrici 2x2 che hanno somma uguale a zero:
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(matr[r][c]+matr[r+1][c]+matr[r][c+1]+matr[r+1][c+1]==0)
                cont++;
        }
    }
    printf("il numero di sottomatrici 2x2 che hanno somma uguale a zero è: %d\n",cont);
    cont=0;
    
//    conto le sottomatrici che hanno somma uguale a zero:
    while (s<N) {
        for (r=0; r<=N-s; r++) {
            for (c=0; c<M-s; c++) {
                sum=0;
                for (u=r; u<s+r; u++) {
                    for ( v=c; v<s+c; v++) {
                        sum+=matr[u][v];
                    }
                }
                if(sum==0)
                    cont++;
            }
        }
    }
    printf("Il numero di sottomatrici con somma uguale a zero è: %d\n",cont);
    return 0;
}
