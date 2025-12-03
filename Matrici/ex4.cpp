//
//  ex4.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

int main() {
    int M[N][N];
    int A[N];
    int r,c,i;
    int cont=0;
    int vero=1;
    
//    acquisisco matrice dall'utente:
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    for (i=0; i<N; i++) {
        printf("Inserisci valore dell'array della casella %d di %d:\n",i+1,N);
        scanf("%d",&A[i]);
    }
    
    for (r=0; r<N; r++) {
        for (i=0; i<N; i++) {
            cont=0;
            for (c=0; c<N; c++) {
                if(M[r][c]%A[i]==0)
                    cont++;
            }
            if(cont>=2&&vero!=3){
                printf("1\n");
                vero=3;
            }
        }
    }
    if(vero==1)
        printf("0\n");
    return 0;
}
