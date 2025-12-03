//
//  ex10.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 7

int numSomme (int m1[][N], int m2[][N]);
int calcSommeM1(int m1[][N],int elem);

int main(){
    int m1[N][N],m2[N][N];
    
    
    return 0;
}

int numSomme (int m1[][N], int m2[][N])
{
    int r,c,cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(calcSommeM1(m1, m2[r][c])!=0)
                cont++;
        }
    }
    return cont;
}
int calcSommeM1(int m1[][N],int elem)
{
    int r,c,R,C;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            for (R=0; R<N; R++) {
                for (C=0; C<N; C++) {
                    if(elem==(m1[r][c]+m1[R][C])&&(r!=R||c!=C))
                        return 1;
                }
            }
        }
    }
    return 0;
}
