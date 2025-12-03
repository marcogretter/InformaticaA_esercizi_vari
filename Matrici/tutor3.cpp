//
//  tutor3.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2
/*Scrivere un programma che esegue un inserimento controllato di una matrice.
 In particolare, il programma deve controllare che il valore corrente non sia già stato inserito dall’utente in precedenza, e nel caso non inserirlo.*/

int controlloEsistenza(int M[][N], int n,int i,int k);

int main(){
    int M[N][N];
    int r,c;
//    chiedo di inserire la matrice:
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            do {
                printf("Inserisci valore:\n");
                scanf("%d",&M[r][c]);
            } while (controlloEsistenza(M, M[r][c],r,c)==0);
            
        }
    }
//    stampo la matrice:
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("%d\t",M[r][c]);
        }
        printf("\n");
    }

    return 0;
}
int controlloEsistenza(int M[][N], int n,int i,int k)
{
    int r,c;
    if(i==0&&k==0)
        return 1;
    for (r=0; r<=i; r++) {
        for (c=0; c<k; c++) {
            if(M[r][c]==n){
                printf("Inserisci un valore diverso.\n");
                return 0;
            }
        }
    }
    return 1;
}
