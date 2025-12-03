//
//  ex7.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 30
#define SENTINELLA 0

int quantiUgualiConNestedLoop(int A[][N],int B[][N],int k);
int quantiUgualiConMergeScan(int A[][N],int B[][N],int k);

int main(){
    int M1[N][N],M2[N][N];
    int r,c,k;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore della riga %d colonna %d della prima matrice:\n",r+1,c+1);
            scanf("%d",&M1[r][c]);
        }
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore della riga %d colonna %d della seconda matrice:\n",r+1,c+1);
            scanf("%d",&M2[r][c]);
        }
    }
    printf("Fino a quale casella vuoi esplorarle?\n");
    scanf("%d",&k);
    
    printf("Le caselle uguali con Nested Loop sono: %d\n",quantiUgualiConNestedLoop(M1, M2, k));
    printf("Le caselle uguali con Merge Scan sono: %d\n",quantiUgualiConMergeScan(M1, M2, k));
    return 0;
}
int quantiUgualiConNestedLoop(int A[][N],int B[][N],int k)
{
    int r,c;
    int cont=0,cont1=0;
    do {
        for (r=0; r<N; r++) {
            for (c=0; c<N; c++) {
                if(A[r][c]==B[r][c])
                    cont++;
                cont1++;
            }
        }
    } while (k>cont1);
    return cont;
}
int quantiUgualiConMergeScan(int A[][N],int B[][N],int k)
{
    int d,p,i,j,cont=0,quanti=0;
    
    for (d=0; d<N&&cont<k; d++) {
        i=0;j=d;
        for (p=0; p<d+1&&cont<k; p++) {
            if(A[i][j]==B[i][j])
                quanti++;
            cont++;
            i++;j++;
        }
    }
    return quanti;
}
