//
//  main.cpp
//  Funzioni_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

typedef struct {
    int V[20];
    int C;
} STR;

int f(STR X,int MATR[][N]);
int Presenza(int X,int M[][N]);

int main(){
    return 0;
}
int f(STR X,int MATR[][N])
{
    int i,sum=0;
    for (i=0; i<X.C; i++) {
        if(Presenza(X.V[i],MATR)!=0)
            sum+=X.V[i];
    }
    return sum;
}
int Presenza(int X,int M[][N])
{
    int r,c,cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(M[r][c]%X==0)
                cont++;
        }
    }
    if(cont>=3)
        return 1;
    return 0;
}
