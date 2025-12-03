//
//  ex8.cpp
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

int f(int M[6][156]);

int main(){
    
    return 0;
}
int f(int M[6][156])
{
    int num,nSuperEnalotto,estrazioni,cont=90;
    int vero=1;
    for (num=1; num<91; num++) {
        vero=1;
        for (estrazioni=0; estrazioni<156; estrazioni++) {
            for (nSuperEnalotto=0; nSuperEnalotto<6; nSuperEnalotto++) {
                if((num==M[nSuperEnalotto][estrazioni])&&(vero==1)){
                    cont--;
                    vero=3;
                }
            }
        }
    }
    return cont;
}
