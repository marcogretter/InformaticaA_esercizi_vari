//
//  ex9.cpp
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

int f(int a[]);
int controlloPrecedenti(int pos,int num,int v[]);

int main(){
    int v[N]={1,2,1,3,6,4,14};
    
    printf("%d\n",f(v));
    return 0;
}
int f(int a[])
{
    int i,cont=0;
    for (i=0; i<N; i++) {
        if(a[i]==controlloPrecedenti(i, a[i], a))
            cont++;
    }
    return cont;
}
int controlloPrecedenti(int pos,int num,int v[])
{
    int i,cont=0;
    for (i=0; i<pos; i++) {
        if(v[i]<num)
            cont++;
    }
    return cont;
}
