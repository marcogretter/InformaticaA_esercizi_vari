//
//  partita_a_scacchi.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 8
#define sentinella 0
/*Su una scacchiera 8x8 sono posizionati due pezzi: il Re bianco e la Regina nera.
 Si scriva un programma in linguaggio C che, acquisite le posizioni del Re e della Regina, determini se la Regina è in posizione tale da poter mangiare il Re. Le posizioni dei due pezzi sono identiﬁcate da mediante la riga e la colonna su cui si trovano, espresse come numeri interi tra 1 e 8.
*/

int NumeroDivisori(int num);
void stampaScacchiera(int Mat[][N],int RRE,int CRE,int RREGINA,int CREGINA);
int VerificaUccisione(int M[][N],int RRE,int RREGINA,int CRE,int CREGINA);

int main() {
    int rigaRegina,colonnaRegina,rigaRe,colonnaRe;
    int M[N][N]={0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0};
    do{
        printf("In che riga è la regina?\n");
        scanf("%d",&rigaRegina);
        printf("In che colonna è la regina:\n");
        scanf("%d",&colonnaRegina);
    }while(rigaRegina>=N||rigaRegina<0||colonnaRegina>=N||colonnaRegina<0);
    
    do{
        printf("In che riga è il re?\n");
        scanf("%d",&rigaRe);
        printf("In che colonna è il re:\n");
        scanf("%d",&colonnaRe);
    }while(rigaRe>=N||rigaRe<0||colonnaRe>=N||colonnaRe<0);
    
    stampaScacchiera(M, rigaRe, colonnaRe, rigaRegina, colonnaRegina);
    if(VerificaUccisione(M, rigaRe, rigaRegina, colonnaRe, colonnaRegina)==1)
        printf("Non è possibile uccidere il re con una sola mossa.\n");
    else
        printf("Il re sarà ucciso.\n");
    return 0;
}

void stampaScacchiera(int Mat[][N],int RRE,int CRE,int RREGINA,int CREGINA)
{
    int r,c;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(r==RREGINA&&c==CREGINA)
                printf("RG\t");
            if(r==RRE&&c==CRE)
                printf("RE\t");
            else
                printf("_\t");
        }
        printf("\n");
    }
}
int VerificaUccisione(int M[][N],int RRE,int RREGINA,int CRE,int CREGINA)
{
    int i;
//    riga:
    if(RRE==RREGINA)
        return 0;
//    colonna
    if(CRE==CREGINA)
        return 0;
//    diagonale principale
    for (i=0; i<N; i++) {
        if(RREGINA==RRE+i&&CREGINA==CRE+i)
            return 0;
        if(RREGINA+i==RRE&&CREGINA+i==CRE)
            return 0;
    }
//    diagonale secondaria
    for (i=0; i<N; i++) {
        if(RREGINA==RRE+i&&CREGINA==CRE-i)
            return 0;
        if(RREGINA+i==RRE&&CREGINA-i==CRE)
            return 0;
    }
    return 1;
}
