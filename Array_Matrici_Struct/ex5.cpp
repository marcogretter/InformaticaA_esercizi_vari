//
//  ex5.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100

typedef struct {
    int giorno, mese, anno;
} Data;
typedef struct {
    char nome[N]; //si suppone essere diverso per ogni birra
    int gradoAlcolico;
    char descrizione[N];
    int valido;
} Birra;
typedef struct {
    char nome[N];
    Data data;
    Birra Degustate[N];
    int valido;
} Degustazione;

typedef Degustazione Degustazioni[N];


int main() {
    Degustazioni D;
    Degustazioni ECCESSIVE;
    int limite=0;//inizializzata ma non sarebbe stato richiesto.
    int i,k=0;
    
    for (i=0; i<N; i++) {
        if((D[i].data.mese==1)&&(D[i].data.anno==2020)&&(D[i].valido>limite)){
            ECCESSIVE[k]=D[i];
            k++;
            D[i]=D[i+1];
        }
    }
    return 0;
}
