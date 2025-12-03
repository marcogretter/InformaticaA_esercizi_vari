//
//  main.cpp
//  20_5
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

typedef int matrice[N][N];
int controlloEsistenza(matrice M,int elemV);
int f(STR X,matrice MATR);

int main(){
    STR X;
    matrice M;
    int i,r,c;
    X.C=0;
    printf("Fino a quale casella dell'array vuoi calcolare la somma degli elementi particolari?\n");
    scanf("%d",&X.C);
    for (i=0; i<X.C; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,X.C);
        scanf("%d",&X.V[i]);
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    
    printf("La somma dei valori richiesti è: %d.\n",f(X, M));
    return 0;
}

int f(STR X,matrice MATR)
{
    int i,sum=0;
    for (i=0; i<X.C; i++) {
        if(controlloEsistenza(MATR, X.V[i]))
            sum+=X.V[i];
    }
    return sum;
}
int controlloEsistenza(matrice M,int elemV)
{
    int r,c,cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(M[r][c]%elemV==0)
                cont++;
        }
    }
    if(cont>2)
        return 1;
    return 0;
}
