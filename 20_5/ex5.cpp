//
//  ex5.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 50
void stampa(int num,int volte);
void f(int numFacce,int numLanci);
void esploroArray(int v[],int numLanci);
int controlloPreEsistenza(int v[],int num,int posNum);

int main(){
    int numFacce,numLanci;
    
    printf("Quante facce ha il dado?\n");
    scanf("%d",&numFacce);
    printf("Quanti lanci vuoi fare?\n");
    scanf("%d",&numLanci);
    f(numFacce, numLanci);
    
}

void f(int numFacce,int numLanci)
{
    int numCasuale,i,k;
    int v[numLanci];
    for (i=0; i<numLanci; i++) {
        numCasuale=rand()%numFacce+1;
        v[i]=numCasuale;
    }
    esploroArray(v, numLanci);
}
void esploroArray(int v[],int numLanci)
{
    int i,k,cont=0;
    for (i=0; i<numLanci; i++) {
        cont=0;
        for (k=i; k<numLanci; k++) {
            if(v[i]==v[k])
                cont++;
        }
        if(controlloPreEsistenza(v, v[i], i)!=0)
            stampa(v[i], cont);
    }
}
void stampa(int num,int volte)
{
    if(volte>1)
        printf("La faccia %d è uscita %d volte.\n",num,volte);
    if(volte==1)
        printf("La faccia %d è uscita una volta.\n",num);
}
int controlloPreEsistenza(int v[],int num,int posNum)
{
    int i;
    for (i=posNum-1; i>-1; i--) {
        if(v[i]==num)
            return 0;
    }
    return 1;
}
