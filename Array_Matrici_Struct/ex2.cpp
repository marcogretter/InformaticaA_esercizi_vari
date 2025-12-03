//
//  ex2.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

typedef struct {
    int giorno, mese, anno;
} data;
typedef struct {
    int ora, minuto;
} orario;
typedef struct {
    char codiceFiscale[100], cognome[100], nome[100];
    data DataNascita;
} persona;
typedef struct {
    persona pazienti[1000];
    int numPazienti; //dice quante caselle dell’array contengono dati validi
} listaPazienti;
typedef struct {
    char CFPaziente[100];
    data d;
    orario o;
} visita;
typedef struct {
    visita visite[1000];
    int numVisite; //dice quante caselle dell’array contengono dati validi
} listaVisite;

int main() {
    int i,k;
    visita visit;
    listaPazienti lisPazienti;
    listaVisite lista;
    lista.numVisite=0;
    
    for (i=0; i<1000; i++) {
        for (k=0; k<1000; k++) {
            if((lisPazienti.pazienti[i].codiceFiscale==lista.visite[k].CFPaziente)&&(visit.d.anno==lisPazienti.pazienti[i].DataNascita.anno)&&(visit.d.mese==lisPazienti.pazienti[i].DataNascita.mese)&&(visit.d.giorno==lisPazienti.pazienti[i].DataNascita.giorno))
                lista.numVisite++;
                }
    }
    printf("Il numero delle visite richieste è: %d\n",lista.numVisite);
    
    return 0;
}
