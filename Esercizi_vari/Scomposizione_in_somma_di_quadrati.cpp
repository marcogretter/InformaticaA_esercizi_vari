//
//  Scomposizione_in_somma_di_quadrati.cpp
//  Esercizi_vari
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 8
#define sentinella 0
/*Scrivere un programma che legge un intero positivo n da stdin e verifica se n può essere scomposto nella somma di due quadrati (verifica cioè se   a, b  N | a2+b2=n ). Se sì, stampare a video la scomposizione.
*/

int main() {
    int num;
    int i,k;
    
    printf("Inserisci numero:\n");
    scanf("%d",&num);
    
    for (i=1; i<num;i++) {
        for (k=1; k<num; k++) {
            if(num==((i*i)+(k*k)))
                printf("%dx%d è uguale a %d\n",i*i,k*k,num);
        }
    }
    
    return 0;
}
