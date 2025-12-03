//
//  ex13.cpp
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

//sviluppo funzioni:
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
