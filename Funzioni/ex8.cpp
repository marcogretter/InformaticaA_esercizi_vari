//
//  ex8.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 5

typedef struct {
    int min,sec,cent;
} tempo;
typedef struct {
    char nome[15],cognome[15],nazionalità[15];
    tempo t;
} frazione;

typedef frazione risultato[4][8];

int corsiaVincente(risultato ris);
int recordBattuto(risultato ris, tempo record);
int conversioneTempo(tempo T);

int main(){
    risultato M;
    tempo record;
    
    printf("Quale corsia ha vinto?\n");
    printf("%d",corsiaVincente(M));
    
    printf("Qualcuno ha battuto il record mondiale?\n");
    if(recordBattuto(M, record)!=0)
        printf("SI.\n");
    else
        printf("NO.\n");
    return 0;
}
int corsiaVincente(risultato ris)
{
    int r,c;
    frazione TmpWinner;
    int tempoDaBatt;
    tempoDaBatt=conversioneTempo(ris[0][0].t);
    TmpWinner=ris[0][0];
    int corsiaVinc=0;
    
    for (r=0; r<4; r++) {
        for (c=0; c<8; c++) {
            if(tempoDaBatt>=conversioneTempo(ris[r][c].t)){
                tempoDaBatt=conversioneTempo(ris[r][c].t);
                TmpWinner=ris[r][c];
                corsiaVinc=c;
            }
        }
    }
    return corsiaVinc;
}
int recordBattuto(risultato ris, tempo record)
{
    int recordDaBattere;
    int r,c;
    recordDaBattere=conversioneTempo(record);
    
    for (r=0; r<4; r++) {
        for (c=0; c<8; c++) {
            if(recordDaBattere>conversioneTempo(ris[r][c].t))
                return 1;
        }
    }
    return 0;
}
int conversioneTempo(tempo T)
{
    int sum=0;
    sum+=T.min*6000;
    sum+=T.sec*100;
    sum+=T.cent;
    return sum;
}
