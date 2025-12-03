//
//  ex7.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 32
#define M 10
#define N1 3

int daBinADec(int v[],int lun);
int controllaMaggMin(int m[][N],int elem);

int main(){
    int a[M]={1,0,1,1,0,1,1,0,0,1};
    int m[N][N];
    int v1[M/2],v2[M/2];
    int i,x,y;
    for (i=0; i<M/2; i++) {
        v1[i]=a[i];
    }
    for (i=0; i<M/2; i++) {
        v2[i]=a[5+i];
    }
    x=daBinADec(v1, M/2);
    y=daBinADec(v2, M/2);
    
    printf("%d\n",controllaMaggMin(m, m[x][y]));
    
    return 0;
}

int daBinADec(int v[],int lun)
{
    int i,j=0,sum=0;
    for (i=lun-1; i>=0; i--) {
        sum+=v[i]*pow(2, j);
        j++;
    }
    return sum;
}
int controllaMaggMin(int m[][N],int elem)
{
    int c,contM=0,contm=0;
    for (c=0; c<N; c++) {
        if(m[elem][c]>elem)
            contM++;
        else
            contm++;
    }
    if(contM>=contm)
        return 1;
    return 0;
}
