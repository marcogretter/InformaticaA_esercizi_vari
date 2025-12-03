//
//  ex10.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50

int elemMax(int v[],int cont);
int posMax(int v[],int cont);
int elemMin(int v[],int cont);
int posMin(int v[],int cont);

int main(){
    int v1[N],v2[N];
    int i,cont1=0,cont2=0;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore della casella %d del primo vettore:\n",i+1);
        scanf("%d",&v1[i]);
        if(v1[i]==0)
            break;
        cont1++;
    }
    for (i=0; i<N; i++) {
        printf("Inserisci valore della casella %d del secondo vettore:\n",i+1);
        scanf("%d",&v2[i]);
        if(v2[i]==0)
            break;
        cont2++;
    }
    if(cont1>cont2){
        printf("L'elemento massimo è %d alla casella %d.\n",elemMax(v1, cont1),posMax(v1, cont1));
        printf("L'elemento minimo è %d alla casella %d.\n",elemMin(v1, cont1),posMin(v1, cont1));
    }
    else{
        printf("L'elemento massimo è %d alla casella %d.\n",elemMax(v2, cont2),posMax(v2, cont2));
        printf("L'elemento minimo è %d alla casella %d.\n",elemMin(v2, cont2),posMin(v2, cont2));
    }
    return 0;
}
int elemMax(int v[],int cont)
{
    int i;
    int maxTmp;
    maxTmp=v[0];
    for (i=0; i<=cont; i++) {
        if(v[i]>=maxTmp)
            maxTmp=v[i];
    }
    return maxTmp;
}
int posMax(int v[],int cont)
{
    int i;
    int posTmp=0;
    int maxTmp=v[0];
    
    for (i=0; i<=cont; i++) {
        if(maxTmp<=v[i]){
            maxTmp=v[i];
            posTmp=i;
        }
    }
    return i;
}
int elemMin(int v[],int cont)
{
    int i;
    int minTmp;
    minTmp=v[0];
    for (i=0; i<=cont; i++) {
        if(minTmp>=v[i])
            minTmp=v[i];
    }
    return minTmp;
}
int posMin(int v[],int cont)
{
    int i;
    int posTmp=0;
    int minTmp=v[0];
    
    for (i=0; i<=cont; i++) {
        if(minTmp>=v[i]){
            minTmp=v[i];
            posTmp=i;
        }
    }
    return posTmp;
}
