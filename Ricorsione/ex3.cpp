//
//  ex3.cpp
//  Ricorsione
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N1 5
#define N2 3

int maxVet(int v1[],int v2[],int inizio,int fine);

int main(){
    int V1[N1],V2[N2],i;
    printf("Primo vettore:\n");
    for (i=0; i<N1; i++) {
        printf("Inserisci valore %d di %d:\n",i+1,N1);
        scanf("%d",&V1[i]);
    }
    printf("Secondo vettore:\n");
    for (i=0; i<N2; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N2);
        scanf("%d",&V2[i]);
    }
    if(maxVet(V1, V2, 0,N2-1))
        printf("V2 è inversamente contenuto in V1.\n");
    else
        printf("V2 NON è inversamente contenuto in V1.\n");
    return 0;
}

int maxVet(int v1[],int v2[],int inizio,int fine)
{
//    caso base:
    if(fine<0)
        return 1;
    if(inizio>N1-1)
        return 0;
//    passo induttivo:
    if(v1[inizio]==v2[fine])
        return maxVet(v1, v2, inizio+1, fine-1);
    else
        return maxVet(v1, v2, inizio+1, fine);
}
