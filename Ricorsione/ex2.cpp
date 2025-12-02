//
//  ex2.cpp
//  Ricorsione
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 5

int maxVet(int v[],int n);

int main(){
    int v[N],i,n;
    printf("Quanti elementi ha il vettore?\n");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
    printf("Il massimo del vettore è: %d.\n",maxVet(v,n));
}

int maxVet(int v[],int n)
{
    int tmpMax;
    if(n==1)
        return v[0];
    tmpMax=maxVet(&v[1], n-1);
    if(tmpMax>v[0])
        return tmpMax;
    else
        return v[0];
}
