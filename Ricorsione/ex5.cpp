//
//  ex5.cpp
//  Ricorsione
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 3

void stampaVett(int *v,int lun)
{
    int i;
    for (i=0; i<lun; i++) {
        printf("%d\t",v[i]);
    }
    printf("\n");
}
void scambia(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permutazioni(int *v,int n,int lun)
{
    int i;
    if(n==1)
        stampaVett(v, lun);
    else{
        for (i=0; i<n; i++) {
            scambia(&v[lun-n], &v[lun-n+i]);
            permutazioni(v, n-1,lun);
            scambia(&v[lun-n], &v[lun-n+i]);
        }
    }
}
