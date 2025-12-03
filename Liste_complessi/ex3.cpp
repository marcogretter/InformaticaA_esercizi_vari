//
//  ex3.cpp
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

typedef char Word[N];

typedef struct WNode {
    Word parola;
    struct WNode * next;
} WordNode;

typedef WordNode * WordList;

typedef struct Acro {
    Word sigla;
    WordList listaparole;
} Acronym;

typedef struct ANode {
    Acronym acronimo;
    struct ANode * next;
} AcroNode;

typedef AcroNode * AcroList;

//dichiarazione funzioni:
int contaSigleGiusteSuCento(AcroList nodoDiSigle);
int acronimoGiusto(Acronym *acr);
int controllaLetteraSiglaPrimaLetteraParola(char l,int i,WordList lis);
int cfrSiglaConParole(Word sgl,WordList lDiParole);
int durataLista(WordList lis);

//Sviluppo funzioni:
int contaSigleGiusteSuCento(AcroList nodoDiSigle)
{
    int cont=0;
    if(nodoDiSigle==NULL)
        return 0;
    while (nodoDiSigle!=NULL) {
        if(acronimoGiusto(&nodoDiSigle->acronimo))
            cont++;
        nodoDiSigle=nodoDiSigle->next;
    }
    return cont;
}
int acronimoGiusto(Acronym *acr)
{
    if(cfrSiglaConParole(acr->sigla, acr->listaparole))
        return 1;
    return 0;
}
int cfrSiglaConParole(Word sgl,WordList lDiParole)
{
    int lungSigla,i,cont=1;
    lungSigla=strlen(sgl);
//    Se la lista di parole ha un numero di parole maggiore del numero di lettere della sigla restituisco zero:
    if(lungSigla!=durataLista(lDiParole))
        return 0;
    for (i=0; i<lungSigla; i++) {
        if(controllaLetteraSiglaPrimaLetteraParola(sgl[i],i,lDiParole))
            cont++;
    }
    if(cont==lungSigla)
        return 1;
    return 0;
}
int controllaLetteraSiglaPrimaLetteraParola(char l,int i,WordList lis)
{
    int cont=0;
    while (lis!=NULL) {
        if((cont==i)&&(lis->parola[0]==l))
            return 1;
        cont++;
        lis=lis->next;
    }
    return 0;
}
int durataLista(WordList lis)
{
    int cont=0;
    if(lis==NULL)
        return 0;
    while (lis!=NULL) {
        cont++;
        lis=lis->next;
    }
    return cont;
}
