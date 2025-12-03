//
//  ex4.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50
int lunghezza(int v[],int n);
int f(int v[],int n);

int main(){
    int v[N];
    int i,n;
    
    printf("Quanti valori vuoi inserire nell'array?\n");
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,n);
        scanf("%d",&v[i]);
    }
    if(f(v, n)!=0)
        printf("Il vettore è uniformemente oscillante.\n");
    else
        printf("Il vettore non è uniformemente oscillante.\n");
}

int lunghezza(int v[],int n)
{
    int i,cont=0;
    if(v[0]>v[1])
    {
        for (i=0; i<n; i++) {
            if(v[i]>v[i+1])
                cont++;
            else
                return cont;
        }
    }
    if(v[0]<v[1])
    {
        for (i=0; i<n; i++) {
            if(v[i]<v[i+1])
                cont++;
            else
                return cont;
        }
    }
    return 0;
}
int f(int v[],int n)
{
    int lun,i,contC=0,contD=0;
    lun=lunghezza(v, n);
    
    for (i=0; i<n; i++) {
        if(v[i]>v[i+1]){
            if(contD!=lun&&contD!=0)
                return 0;
            else{
                contD=0;
                contC++;
            }
        }
        if(v[i]<v[i+1]){
            if(contC!=lun&&contC!=0)
                return 0;
            else{
                contC=0;
                contD++;
            }
        }
    }
    return 1;
}
