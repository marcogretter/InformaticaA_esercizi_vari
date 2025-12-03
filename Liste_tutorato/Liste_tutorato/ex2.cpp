//
//  ex2.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//
/*Si consideri una lista semplicemente concatenata di interi. Scrivere una funzione che riceve come parametro la lista ed un intero M e che restituisce la somma dei soli valori della lista che sono multipli di M. Se la lista é vuota, la funzione restituisce il valore −1.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

typedef struct El{
    int info;
    struct El *next;
} elemento;

typedef elemento *lista;


int VerificaPresenza(lista lis,int M)
{
    int sum=0;
    if(lis==NULL)
        return -1;
    while (lis!=NULL) {
        if(lis->info%M==0)
            sum+=lis->info;
        lis=lis->next;
    }
    return sum;
}
