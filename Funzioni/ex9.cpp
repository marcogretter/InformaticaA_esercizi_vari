//
//  ex9.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 5

typedef struct {
    int x[N];
    int y[N];
} punto;
punto MaxNumPunti(int M[][N]);
int trovaMax(int M[][N]);

int main(){
    int M[N][N];
    int r,c;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    
    
    return 0;
}
punto MaxNumPunti(int M[][N])
{
    int r,c,j=0;
    int Max;
    punto nuovo;

    Max=trovaMax(M);
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(Max==M[r][c]){
                nuovo.x[j]=r;
                nuovo.y[j]=c;
                j++;
            }
        }
    }
    return nuovo;
}

int trovaMax(int M[][N])
{
    int r,c;
    int tmpMax;
    tmpMax=M[0][0];
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(tmpMax<=M[r][c])
                tmpMax=M[r][c];
        }
    }
    return tmpMax;
}
