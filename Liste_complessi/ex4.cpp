//
//  ex4.cpp
//  Liste_complessi
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 100

typedef struct Elem {
    char *parola;
    struct Elem * next;
} Nodo;

typedef Nodo * Lista;

//Dichiarazione funzioni:
int f(Lista lis);
int simili (char *s1, char *s2 );

//Sviluppo funzioni:
int f(Lista lis)
{
    if(lis==NULL)
        return 1;
    if(lis->next==NULL)
        return 1;
    while (lis->next!=NULL) {
        if(simili(lis->parola, lis->next->parola)!=1)
            return 0;
    }
    return 1;
}
int simili (char *s1, char *s2 )
{
    int lun1,lun2,i,cont=0;
    lun1=strlen(s1);
    lun2=strlen(s2);
    if(lun1-lun2>2||lun2-lun1>2)
        return 0;
    if(lun1>lun2||lun1==lun2){
        cont=lun1-lun2;//cont parte già con la differenza del numero di lettere tra le due parole.
        for (i=0; i<lun2; i++) {
            if(s1[i]!=s2[i])
                cont++;
            if(cont>2)
                return 0;
        }
    }
    if(lun2>lun1){
        cont=lun2-lun1;
        for (i=0; i<lun1; i++) {
            if(s1[i]!=s2[i])
                cont++;
            if(cont>2)
                return 0;
        }
    }
    return 1;
}
