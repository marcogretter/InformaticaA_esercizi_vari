//
//  ex3.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define R 20
#define C 30

int main() {
    int M[R][C];
    int r,c;
    int i=0,k=0;
    int MDispari[R][C]={0};
    
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            if(M[r][c]%2!=0){
                MDispari[i][k]=M[r][c];
                if(k==C-1){
                    i++;
                    k=0;
                }
                else
                    k++;
            }
        }
    }
    for (i=0; i<R; i++) {
        for (k=0; k<C; k++) {
            printf("%d\t",MDispari[i][k]);
        }
        printf("\n");
    }
    return 0;
}
