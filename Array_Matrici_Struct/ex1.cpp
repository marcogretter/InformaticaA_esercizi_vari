//
//  main.cpp
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
    int giorno,mese, anno;
} data;
typedef struct {
    data d;
    int voto;
} esame;

int main() {
    esame esami[100][34];
    int codice;
    int r,c;
    int tmpVotoMax=18;
    
    printf("Inserisci codice studente:\n");
    scanf("%d",&codice);
    
    for (c=0; c<34; c++) {
        if(esami[codice][c].voto>tmpVotoMax&&(esami[codice][c].d.anno==2020))
            tmpVotoMax=esami[codice][c].voto;
    }
    printf("Il voto massimo dello studente %d nel 2020 è: %d.\n",codice,tmpVotoMax);
    
    return 0;
}
