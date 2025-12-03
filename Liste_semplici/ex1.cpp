//
//  main.cpp
//  Liste_semplici
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct El {
  int dato;
  struct El *next;
} ELEMENTO;

int somma(ELEMENTO *Testa, int M)
{
    int sum=0;
    if(Testa==NULL)
        return -1;
    while (Testa!=NULL) {
        if(Testa->dato%M==0)
            sum+=Testa->dato;
    }
    return sum;
}
