//
//  ex7.cpp
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
    int cont=1;
    int maxUguali=1;
    int r,c,i;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
//    esploro riga:
    for (r=0; r<N; r++) {
        cont=1;
        for (c=0; c<N-1; c++) {
            if(M[r][c]==M[r][c+1])
                cont++;
            else
                cont=1;
        }
        if(cont>=maxUguali)
            maxUguali=cont;
    }
//    esploro colonna:
    for (c=0; c<N; c++) {
        cont=1;
        for (r=0; r<N-1; r++) {
            if(M[r][c]==M[r+1][c])
                cont++;
            else
                cont=1;
        }
        if(cont>=maxUguali)
            maxUguali=cont;
    }
//    diagonale principale:
    r=0;c=0;
    for (i=1; i<N; i++) {
        if(M[r+i][c+i]==M[r+i-1][c+i-1])
            cont++;
        else
            cont=1;
    }
    if(cont>=maxUguali)
        maxUguali=cont;
//    diagonale secondaria:
    r=0;c=N-1;
    for (i=1; i<N; i++) {
        if(M[r+i][c-i]==M[r-1+i][c+1-i])
            cont++;
        else
            cont=1;
    }
    if(cont>=maxUguali)
        maxUguali=cont;
    return 0;
}
