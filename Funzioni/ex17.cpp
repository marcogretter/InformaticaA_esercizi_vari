//
//  ex17.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

int main(){
    int A[N],B[N];
    
}

int ciclici(int A[],int B[],int a,int b)
{
    int tempB=0,i;
    int tempA=A[0];
    int cont1=0,cont2=0;
    
    for (i=0; i<(a*b+a*b); i++) {
        if(tempA<b){
            tempB=B[tempA];
            cont1++;
        }
        if(tempB<a){
            tempA=A[tempB];
            cont2++;
        }
        if(cont1>a&&cont2>b)
            return 1;
        if(tempA<0||tempA>=a)
            return 0;
        if(tempB<0||tempB>=b)
            return 0;
    }
    return 0;
}
