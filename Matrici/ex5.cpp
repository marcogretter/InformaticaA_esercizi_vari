//
//  ex5.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

int abs(int n);

int main() {
    int M[N][N];
    int r,c;
    int cont=0;
    int temp;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
 
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            temp=abs(M[r][c]);
            if(temp>=M[r][r])
                cont++;
            if(r==c)
                cont--;
        }
    }
    
    if(cont==0)
        printf("Dominante.\n");
    else
        printf("Non dominante.\n");
    
    
    return 0;
}
int abs(int n)
{
    if(n<0)
        return (-1)*n;
    else
        return n;
}
