//
//  Alfabeto_farfallino.cpp
//  Esercizi_vari
//
//  Created by Marco Gretter on 03/12/25.
//
/*Scrivere un programma in C:
 •
 Acquisire una stringa
 •
 convertire la stringa in alfabeto farfallino:
 ogni vocale radoppiata con una f interposta:
 es. ciao => cifiafaofo.)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int main(){
    char v[N];
    int lun,i;
    
    printf("Inserisci parola:\n");
    scanf("%s",v);
    
    lun=strlen(v);
    
    for (i=0; i<lun; i++) {
        if((v[i]=='a')||(v[i]=='e')||(v[i]=='i')||(v[i]=='o')||(v[i]=='u'))
            printf("%cf%c",v[i],v[i]);
        else
            printf("%c",v[i]);
    }
    printf("\n");
    
    
    return 0;
}
