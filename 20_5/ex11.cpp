//
//  ex11.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 7

int numSommaDiff (int a[]);
int contaPrec(int v[],int casella);
int contaSuccessivi(int v[],int casella);

int main(){
    int v[N]={1,2,1,20,-6,16,14};
    
    printf("%d\n",numSommaDiff(v));
    
    return 0;
}
int numSommaDiff (int a[])
{
    int i,differenza,cont=0;
    for (i=0; i<N; i++) {
        differenza=contaSuccessivi(a, i)-contaPrec(a, i);
        if(differenza==a[i])
            cont++;
    }
    return cont;
}
int contaPrec(int v[],int casella)
{
    int i,sum=0;
    for (i=0; i<casella; i++) {
        sum+=v[i];
    }
    return sum;
}
int contaSuccessivi(int v[],int casella)
{
    int i,sum=0;
    for (i=casella+1; i<N; i++) {
        sum+=v[i];
    }
    return sum;
}
