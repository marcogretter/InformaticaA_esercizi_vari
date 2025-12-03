//
//  ex2.cpp
//  Liste_complessi
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 5

typedef struct {
    int ore;
    int min;
    int sec;
    int cent;
} Tempo;
 typedef struct Elem {
     int    concorrente;
     Tempo  t_tappa;
     struct Elem * next;
 } Arrivo;
 
typedef Arrivo * Tappa;

 typedef struct Nodo {
     int concorrente;
     Tempo t_totale;
     struct Nodo *next;
 } Posizione;

 typedef Posizione * Classifica;

//dichiarazione funzioni:
long int TempoCent(Tempo t);
void sum(Tempo T1,Classifica posizioni,Tappa tappa);
int cmp(Tempo T1,Tempo T2);
Tempo CentTempo(long int t);
Tempo trovaTempoInGara(Tappa tappa,int concorrente);
Classifica vincitore(Classifica posizioni);

Classifica vincitore(Classifica posizioni)
{
    Classifica tmp;
    while (posizioni->next!=NULL) {
        tmp=vincitore(posizioni->next);
        if(cmp(tmp->t_totale, posizioni->t_totale)==1)
            return tmp;
        else
            return posizioni;
    }
}


void sum(Tempo T1,Classifica posizioni,Tappa tappa)
{
    while (posizioni!=NULL) {
        posizioni->t_totale=CentTempo(TempoCent(posizioni->t_totale)+TempoCent(trovaTempoInGara(tappa, posizioni->concorrente)));
        posizioni=posizioni->next;
    }
    vincitore(posizioni);
}
Tempo trovaTempoInGara(Tappa tappa,int concorrente)
{
    while (tappa!=NULL) {
        if(concorrente==tappa->concorrente)
            return tappa->t_tappa;
        tappa=tappa->next;
    }
    return tappa->t_tappa;//do il tempo dell'ultimo arrivato.
}


int cmp(Tempo T1,Tempo T2)
{
    if(TempoCent(T1)==TempoCent(T2))
        return 0;
    if(TempoCent(T1)>TempoCent(T2))
        return 1;
    return -1;
}
long int TempoCent(Tempo t)
{
    return t.cent+t.sec*100+t.min*100*60+t.ore*60*60*100;
}
Tempo CentTempo(long int t)
{
    Tempo tem;
    long int tmp=t;
    tem.ore=t-(t/60000);
    tmp=t-(t/60000);
    tem.min=tmp-(tmp/6000);
    tmp=tmp-(tmp/6000);
    tem.sec=tmp-(tmp/100);
    tmp=tmp-(tmp/100);
    tem.cent=tmp;
    return tem;
}
