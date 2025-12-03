//
//  ex13bis.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef int matrice[N][N];
typedef matrice matmat[N][N];
//dichiarazione funzioni:
int contieneKKvolte(matrice M, int k);
int f(matmat M,int k);
int maxK(matmat M);
int kKVolteMax(matrice m,matmat M);

//sviluppo funzioni:
int maxK(matmat M)
{
    int r,c,vero=1,maxTmp = 0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(kKVolteMax(M[r][c], M)&&vero==1){
                maxTmp=kKVolteMax(M[r][c], M);
                vero=3;
            }
            if(kKVolteMax(M[r][c],M)&&vero!=1)
                if(maxTmp<kKVolteMax(M[r][c], M))
                    maxTmp=kKVolteMax(M[r][c], M);
        }
    }
    return maxTmp;
}
int kKVolteMax(matrice m,matmat M)
{
    int r,c,vero=1,maxTmp = 0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(contieneKKvolte(m, m[r][c])&&f(M,m[r][c])&&vero==1)
                maxTmp=m[r][c];
            vero=3;
        }
        if(contieneKKvolte(m, m[r][c])&&f(M, m[r][c])&&vero!=1)
            if(maxTmp<m[r][c])
                maxTmp=m[r][c];
    }
    return maxTmp;
}
int f(matmat M,int k)
{
    int r,c,cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(contieneKKvolte(M[r][c], k))
                cont++;
        }
    }
    if(cont==k)
        return 1;
    return 0;
}
int contieneKKvolte(matrice M, int k)//conta quante volte una matrice contiene k e se contiene k kvolte restituisce 1, altrimenti 0.
{
    int r,c,cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(M[r][c]==k)
                cont++;
        }
    }
    if(cont==k)
        return 1;
    return 0;
}
