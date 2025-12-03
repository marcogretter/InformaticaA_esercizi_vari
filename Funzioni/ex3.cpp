//
//  ex3.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10

int NumElemCopiati(int v1[],int v2[]);

int main(){
    int v1[N],v2[N];
    int i;
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v1[i]);
    }
    
    printf("Il numero di elementi copiati è: %d\n",NumElemCopiati(v1, v2));
    
    return 0;
}
int NumElemCopiati(int v1[],int v2[])
{
    int i,j=0;
    for (i=0; i<N; i++) {
        if(v1[i]%2==0){
            v2[j]=v1[i];
            j++;
        }
    }
    return j;
}
