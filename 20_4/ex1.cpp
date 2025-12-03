//
//  main.cpp
//  20_4
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

int f(int M[][N],int vD[],int vS[]);

int main(){
    int M[N][N];
    int vD[N],vS[N];
    if(f(M, vD, vS))
        printf("Esiste.\n");
    else
        printf("NON esiste.\n");
    return 0;
}

int f(int M[][N],int vD[],int vS[])
{
    int r,c,i;
    int cont1=0,cont2=0;
//    controllo se tutta una riga è uguale a uno dei due array:
    for (r=0; r<N; r++) {
        cont1=0;cont2=0;
        for (c=0; c<N; c++) {
            if(M[r][c]==vD[c])
                cont1++;
            if(M[r][c]==vS[c])
                cont2++;
        }
        if(cont1==N-1||cont2==N-1)
            return 1;
    }
    //    controllo se tutta una colonna è uguale a uno dei due array:
    for (c=0; c<N; c++) {
        cont1=0;cont2=0;
        for (r=0; r<N; r++) {
            if(M[r][c]==vD[r])
                cont1++;
            if(M[r][c]==vS[r])
                cont2++;
        }
        if(cont1==N-1||cont2==N-1)
            return 1;
    }
//    diagonale principale:
    cont1=0;cont2=0;
    for (i=0; i<N; i++) {
        if(M[i][i]==vD[i])
            cont1++;
        if(M[i][i]==vS[i])
            cont2++;
    }
    if(cont1==N-1||cont2==N-1)
        return 1;
    cont1=0;cont2=0;
    r=0;c=N-1;
    for (i=0; i<N; i++) {
        if(M[i][c-i]==vD[i])
            cont1++;
        if(M[i][c-i]==vS[i])
            cont2++;
    }
    if(cont1==N-1||cont2==N-1)
        return 1;
    return 0;
}
