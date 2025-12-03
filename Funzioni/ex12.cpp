//
//  ex12.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define R 3
#define C 4

int dominanza(int A[R][C],int B[R][C]);

int main(){
    int A[R][C],B[R][C];
    int temp;
    int r,c;
    
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            printf("Inserisci valore della casella di riga %d colonna %d della prima matrice:\n",r+1,c+1);
            scanf("%d",&A[r][c]);
        }
    }
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            printf("Inserisci valore della casella di riga %d colonna %d della seconda matrice:\n",r+1,c+1);
            scanf("%d",&B[r][c]);
        }
    }
    temp=dominanza(A, B);
    if(temp==1)
        printf("A è dominante su B.\n");
    if(temp==-1)
        printf("B è dominante su A.\n");
    else
        printf("La dominanza non può essere determinata.\n");
    
    return 0;
}
int dominanza(int A[R][C],int B[R][C])
{
    int contA=0,contB=0;
    int r,c;
    
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            if(A[r][c]==B[r][c])
                return 0;
            if(A[r][c]>B[r][c])
                contA++;
            else
                contB++;
        }
    }
    if(contA>contB)
        return 1;
    if(contB>contA)
        return -1;
    return 0;
}
