//
//  ex3.cpp
//  20_4
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

int f(int M[][N],int v[]);
int trovaValoreInVettore(int v[],int numMat,int M[][N]);
int riga(int M[][N],int numMat,int riga);
int colonna(int M[][N],int numMat,int colonna);
int diagPrincipale(int M[][N],int numMat);
int diagSecondaria(int M[][N],int numMat);

int main(){
    int M[N][N];
    int v[N];
    if(f(M,v))
        printf("Esiste.\n");
    else
        printf("NON esiste.\n");
    return 0;
}

int f(int M[][N],int v[])
{
    int r,c,i;
    int cont=0;
//    colonna:
    for (r=0; r<N; r++) {
        cont=0;
        for (c=0; c<N; c++) {
            if(trovaValoreInVettore(v, M[r][c],M)==riga(M, M[r][c], r))
                cont++;
        }
        if(cont==N-1)
            return 1;
    }
//    riga:
    for (c=0; c<N; c++) {
        cont=0;
        for (r=0; r<N; r++) {
            if(trovaValoreInVettore(v,M[r][c],M)==colonna(M, M[r][c], c))
                cont++;
        }
        if(cont==N-1)
            return 1;
    }
//    diagonale principale:
    r=0;c=0;
    cont=0;
    for (i=0; i<N; i++) {
        if(trovaValoreInVettore(v,M[i][i],M)==diagPrincipale(M, M[i][i]))
            cont++;
    }
    if(cont==N-1)
        return 1;
//    diagonale secondaria:
    r=0;c=N-1;
    cont=0;
    for (i=0; i<N; i++) {
        if(trovaValoreInVettore(v, M[i][c-i],M)==diagSecondaria(M, M[i][c-i]))
            cont++;
    }
    if(cont==N-1)
        return 1;
    return 0;
}
int trovaValoreInVettore(int v[],int numMat,int M[][N])
{
    int i,cont=0;
    for (i=0; i<N; i++) {
        if(v[i]==numMat)
            cont++;
    }
    return cont;
}
int riga(int M[][N],int numMat,int riga)
{
    int c,cont=0;
    for (c=0; c<N; c++) {
        if(numMat==M[riga][c])
            cont++;
    }
    return cont;
}
int colonna(int M[][N],int numMat,int colonna)
{
    int r,cont=0;
    for (r=0; r<N; r++) {
        if(M[r][colonna]==numMat)
            cont++;
    }
    return cont;
}
int diagPrincipale(int M[][N],int numMat)
{
    int i,cont=0;
    for (i=0; i<N; i++) {
        if(M[i][i]==numMat)
            cont++;
    }
    return cont;
}
int diagSecondaria(int M[][N],int numMat)
{
    int c=N-1;
    int i,cont=0;
    for (i=0; i<N; i++) {
        if(M[i][c-i]==numMat)
            cont++;
    }
    return cont;
}
