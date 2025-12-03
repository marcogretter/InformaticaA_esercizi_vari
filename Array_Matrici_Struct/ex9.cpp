//
//  ex9.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 2

int controlloElemPari(int r,int c,int M[][N]);

int main(){
    int M[N][N];
    int r,c;
    int cont=0;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("%d\t",M[r][c]);
            if(controlloElemPari(r, c, M)!=0)
                cont++;
        }
        printf("\n");
    }
    printf("Il numero di elementi circondati solo da nunmeri pari è: %d\n",cont);
    return 0;
}

int controlloElemPari(int r,int c,int M[][N])
{
    if(r==0&&c==0)
        if((M[r+1][c]%2==0)&&(M[r+1][c+1]%2==0))
            return 1;
    if(r==N-1&&c==N-1)
        if((M[r-1][c]%2==0)&&(M[r][c-1]%2==0))
            return 1;
    if(r==0&&c==N-1)
        if((M[r][c-1]%2==0)&&(M[1][c]%2==0))
            return 1;
    if(r==N-1&&c==0)
        if((M[r-1][c]%2==0)&&(M[r][1]%2==0))
            return 1;
    if(r==0)
        if((M[r][c+1]%2==0)&&(M[r][c-1]%2==0)&&(M[1][c]%2==0))
            return 1;
    if(r==N-1)
        if((M[r][c+1]%2==0)&&(M[r][c-1]%2==0)&&(M[r-1][c]%2==0))
            return 1;
    if(c==0)
        if((M[r+1][c]%2==0)&&(M[r-1][c]%2==0)&&(M[r][1]%2==0))
            return 1;
    if(c==N-1)
        if((M[r-1][c]%2==0)&&(M[r+1][c]%2==0)&&(M[r][c-1]%2==0))
            return 1;
    if((M[r+1][c]%2==0)&&(M[r-1][c]%2==0)&&(M[r][c+1]%2==0)&&(M[r][c-1]%2==0))
        return 1;
    return 0;
}
