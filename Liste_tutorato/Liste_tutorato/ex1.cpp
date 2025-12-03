//
//  main.cpp
//  Liste_tutorato
//
//  Created by Marco Gretter on 03/12/25.
//

/*Si consideri una lista semplicemente concatenata di interi.
 Scrivere una funzione che riceve come parametro la lista ed un
 intero x e che verifica se l’intero x é presente nella lista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

typedef struct El{
    int info;
    struct El *next;
} elemento;

typedef elemento *lista;


int VerificaPresenza(lista lis,int x)
{
    if(lis==NULL)
        return 0;
    while (lis!=NULL) {
        if(lis->info==x)
            return 1;
        lis=lis->next;
    }
    return 0;
}
