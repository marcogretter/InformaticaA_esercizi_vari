//
//  ex3.cpp
//  20_3
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

int numeriPrimi(int n);
int multipli(int v[N],int primo1,int primo2,int posto1,int posto2);
int verifica(int v[N]);

int main(){
    int v[N];
    int i;
    
    for (i=0; i<N; i++) {
        printf("Inserisci numeri dell'array:\n");
        scanf("%d",&v[i]);
    }
    if(verifica(v))
        printf("OK\n");
    else
        printf("NON OK\n");
    
    return 0;
}
int verifica(int v[N])
{
    int i,temp=-1,cont=0,cont1=0;
    for (i=0; i<N; i++) {
        if(numeriPrimi(v[i])){
            cont++;
            if(temp==-1){
                cont1++;
                temp=i;
            }
            if(temp!=-1&&cont!=1){
                if(i-temp==4&&multipli(v, v[temp], v[i],i-4,i)){
                    temp=i;
                    cont1++;
                }
            }
        }
    }
    if(cont==cont1)
        return 1;
    return 0;
}
int numeriPrimi(int n)
{
    int i,cont=0;
    for (i=1; i<n; i++) {
        if(n%i==0)
            cont++;
    }
    if(cont==1)
        return 1;
    return 0;
}
int multipli(int v[N],int primo1,int primo2,int posto1,int posto2)
{
    int i,cont=0;
    for (i=posto1+1; i<posto2; i++) {
        if(primo1%v[i]==0&&primo2%v[i]==0)
            cont++;
    }
    if(cont==2)
        return 1;
    return 0;
}
