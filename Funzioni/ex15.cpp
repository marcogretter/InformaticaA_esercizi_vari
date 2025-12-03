//
//  ex15.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 5

typedef struct{
    int Re;
    int Im;
    int modulo;
} Complex;

int moduloComplex(Complex Comp);
int main(){
    Complex comp[N];
    int i,j,temp;
    
    for (i=0; i<N; i++) {
        comp[i].modulo=moduloComplex(comp[i]);
    }
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            if(comp[j].modulo>comp[j+1].modulo){
                temp=comp[j].modulo;
                comp[j].modulo=comp[j+1].modulo;
                comp[j+1].modulo=temp;
            }
        }
    }
    for (i=0; i<N; i++) {
        printf("%d\t",comp[i].modulo);
    }
    printf("\n");
    
    return 0;
}

int moduloComplex(Complex Comp)
{
    int QRe,QIm,modulo;
    QRe=Comp.Re*Comp.Re;
    QIm=Comp.Im*Comp.Im;
    
    modulo=sqrtf(QRe+QIm);
    return modulo;
}
