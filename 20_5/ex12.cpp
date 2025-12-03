//
//  ex12.cpp
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

void f(int a[], int b[]);
int numPari(int a[],int casella,int elem);
int numDispari(int a[],int casella,int elem);

int main(){
    int a[N],b[N]={0,0,0,0,0,0,0};

    return 0;
}

void f(int a[], int b[])
{
    int i,j=0;
    for (i=0; i<N; i++) {
        if(numPari(a, i, a[i])==numDispari(a, i, a[i])){
            b[j]=a[i];
            j++;
        }
    }
    for (i=0; i<N; i++) {
        printf("%d\t",b[i]);
    }
    printf("\n");
}
int numDispari(int a[],int casella,int elem)
{
    int i,cont=0;
    for (i=casella+1; i<N; i++) {
        if((a[i]%2!=0)&&(a[i]<elem))
            cont++;
    }
    return cont;
}
int numPari(int a[],int casella,int elem)
{
    int i,cont=0;
    for (i=0; i<casella; i++) {
        if((a[i]%2==0)&&(a[i]>elem))
            cont++;
    }
    return cont;
}
