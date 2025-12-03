//
//  ex3.cpp
//  Funzioni_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20
#define M 30

typedef float MAT[N][M];
int controllaPozzi(MAT m,int r,int c);
int f(MAT m);

int main(){
    int r,c;
    MAT m;
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%f",&m[r][c]);
        }
    }
    printf("Il numero di pozzi è: %d.\n",f(m));
    
    return 0;
}
int f(MAT m)
{
    int r,c,cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<M; c++) {
            if(controllaPozzi(m, r, c)!=0)
                cont++;
        }
    }
    return cont;
}
int controllaPozzi(MAT m,int r,int c)
{
    if(r==0&&c==0)
        if((m[r+1][c]>m[r][c]*2)&&(m[r][c+1]>m[r][c]*2)&&(m[r+1][c+1]>m[r][c]*2))
            return 1;
    if(r==N-1&&c==M-1)
        if((m[r-1][c]>m[r][c]*2)&&(m[r][c-1]>m[r][c]*2)&&(m[r-1][c-1]>m[r][c]*2))
            return 1;
    if(r==0&&c==M-1)
        if((m[r+1][c]>m[r][c]*2)&&(m[r][c-1]>m[r][c]*2)&&(m[r+1][c-1]>m[r][c]*2))
            return 1;
    if(r==N-1&&c==0)
        if((m[r-1][c]>m[r][c]*2)&&(m[r][c+1]>m[r][c]*2)&&(m[r-1][c+1]>m[r][c]*2))
            return 1;
    if(r==0)
        if((m[r+1][c]>m[r][c]*2)&&(m[r][c+1]>m[r][c]*2)&&(m[r][c-1]>m[r][c]*2)&&(m[r+1][c+1]>m[r][c]*2)&&(m[r+1][c-1]>m[r][c]*2))
            return 1;
    if(c==0)
        if((m[r+1][c]>m[r][c]*2)&&(m[r][c+1]>m[r][c]*2)&&(m[r-1][c]>m[r][c]*2)&&(m[r+1][c+1]>m[r][c]*2)&&(m[r-1][c+1]>m[r][c]*2))
            return 1;
    if(r==N-1)
        if((m[r-1][c]>m[r][c]*2)&&(m[r][c+1]>m[r][c]*2)&&(m[r][c-1]>m[r][c]*2)&&(m[r-1][c+1]>m[r][c]*2)&&(m[r-1][c-1]>m[r][c]*2))
            return 1;
    if(c==M-1)
        if((m[r+1][c]>m[r][c]*2)&&(m[r][c-1]>m[r][c]*2)&&(m[r-1][c]>m[r][c]*2)&&(m[r+1][c-1]>m[r][c]*2)&&(m[r-1][c-1]>m[r][c]*2))
            return 1;
    if((m[r+1][c]>m[r][c]*2)&&(m[r-1][c]>m[r][c]*2)&&(m[r][c+1]>m[r][c]*2)&&(m[r][c-1]>m[r][c]*2)&&(m[r+1][c+1]>m[r][c]*2)&&(m[r-1][c-1]>m[r][c]*2)&&(m[r+1][c-1]>m[r][c]*2)&&(m[r-1][c+1]>m[r][c]*2))
        return 1;
    return 0;
}
