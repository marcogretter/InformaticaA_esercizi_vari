//
//  tutor1.h
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2
#define M 3
/*Scrivere un programma che chiede all’utente di inserire una matrice di interi 20 × 30, poi (dopo aver terminato la fase di inserimento) esegue le seguenti operazioni:
 Crea un vettore in cui ciascun elemento contiene il numero di elementi dispari in ciascuna riga della matrice
 Copia gli elementi dispari in una seconda matrice 20 × 30 senza lasciare buchi, se non in fondo*/

int main(){
    int matr[N][M];
    int matr2[N][M];
    int v[N];
    int r,c;
    int i=0,k=0;
    int cont=0;
    int x,y;
    
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
//    controllo quanti elementi dispari:
    for (r=0; r<N; r++) {
        cont=0;
        for (c=0; c<M; c++) {
            if(matr[r][c]%2!=0)
                cont++;
        }
        v[r]=cont;
    }
//    stampo il vettore:
    printf("Il vettore è:\n");
    for (r=0; r<N; r++) {
        printf("%d\t",v[r]);
    }
    printf("\n");
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            if((matr[r][c]%2!=0)&&(k<M)&&(k!=M-1)){
                matr2[i][k]=matr[r][c];
                k++;
            }
            else
                if((matr[r][c]%2!=0)&&(k==M-1)){
                    matr2[i][k]=matr[r][c];
                    k=0;
                    i++;
            }
        }
    }
    for (x=i; x<N; x++) {
        for (y=k; y<M; y++) {
            matr2[x][y]=0;
        }
    }
    printf("La nuova matrice tutta dispari è:\n");
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            printf("%d\t",matr2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
