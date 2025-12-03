//
//  ex6.cpp
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

int valoriBuoni(int v[]);
int controlloQuad(int num1,int num2);

int main(){
    int v[N];
    int i,cont=0;
        for (i=0; i<N; i++) {
            do {
                printf("Inserisci valore per la casella %d:\n",i+1);
                scanf("%d",&v[i]);
            } while (v[i]<0);
            cont++;
            if(v[i]==0)
                break;
        }
    printf("Le coppie di numeri cercati sono: %d.\n",valoriBuoni(v));
    
    
    return 0;
}
int controlloQuad(int num1,int num2)
{
    int prod;
    int i;
    prod=num1*num2;
    
    for (i=1; i<prod; i++) {
        if(prod==i*i)
            return 1;
    }
    return 0;
}


int valoriBuoni(int v[])
{
    int i,cont=0;
    
    for (i=0; i<N-1||v[i+1]==0; i++) {
        if((v[i]%2==0)&&(v[i+1]%2==0)&&(v[i]!=v[i+1])&&(controlloQuad(v[i], v[i+1])!=0))
            cont++;
    }
    return cont;
}
