//
//  ex5.cpp
//  Liste_complessi
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef struct Elem {
    int x;
    int y;
    struct Elem * next;
} Punto;

typedef Punto * Linea;
//Dichiarazione funzioni:
int verificaAND(Linea lis);//verifica che ci siano almeno due punti e che i punti siano tutti diversi tra loro.
int scorroLista(Linea lis);//conta i punti totali della lista.
int verificoNonCiSianoPuntiUguali(int x,int y,Linea lis);//scorre tutta la lista e conta i punti che hanno le stesse coordinate.
float Distanza(int xPrimo,int yPrimo,int xSecondo,int ySecondo);//calcolo la distanza tra due punti.
int disgiunte(Linea A,Linea B);//A e B non hanno punti in comune.
int puntiInComune(int x,int y,Linea B);
int scorciatoia(Linea A, Linea B);//restituisce 1 se A è scorciatoia di B, 0 altrimenti
float calcoloLunghezza(Linea lis);//calcola lunghezza di una linea spezzata.
Linea ultimeCoordinate(Linea lis);
int contiene(Linea A,Linea B);//1 se A contiene B, 0 altrimenti.
int verificaSottoLinea(Linea A,Linea B);
int estende(Linea A, Linea B);
Linea concatena(Linea A, Linea B);
Linea InsInFondo( Linea lista,int x,int y );
//Sviluppo funzioni:
int verificaAND(Linea lis)
{
    Linea ListaTot;
    ListaTot=lis;
    if(scorroLista(lis)<2)
        return 0;//ritorno 0 se la lista non ha almeno due elementi.
    while (lis!=NULL) {
        if(verificoNonCiSianoPuntiUguali(lis->x, lis->y, ListaTot)!=1)
            return 0;
        lis=lis->next;
    }
    return 1;
}
int scorroLista(Linea lis)
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
int verificoNonCiSianoPuntiUguali(int x,int y,Linea lis)
{
    int cont=0;
    while (lis!=NULL) {
        if(lis->x==x&&lis->y==y)
            cont++;
    }
    if(cont==1)
        return 1;//considero che ci sia il nodo corrente.
    else
        return 0;
}
float Distanza(int xPrimo,int yPrimo,int xSecondo,int ySecondo)
{
    int differenzaX,differenzaY,QdrX,QdrY,distanzaTot;
    differenzaX=xSecondo-xPrimo;
    differenzaY=ySecondo-yPrimo;
    QdrX=differenzaX*differenzaX;
    QdrY=differenzaY*differenzaY;
    distanzaTot=sqrtf(QdrX+QdrY);
    return distanzaTot;
}
int disgiunte(Linea A,Linea B)
{
    if(A==NULL&&B==NULL)
        return 1;//non hanno punti, quindi non ne hanno in comune.
    if(A==NULL||B==NULL)
        return 1;//uno dei due non ha punti, quindi non ne hanno in comune.
    while (A!=NULL) {
        if(puntiInComune(A->x, A->y, B)==0)
            return 0;
        A=A->next;
    }
    return 1;//non hanno punti in comune.
}
int puntiInComune(int x,int y,Linea B)
{
    while (B!=NULL) {
        if(x==B->x&&y==B->y)
            return 0;
    }
    return 1;
}
float calcoloLunghezza(Linea lis)
{
    float sum=0;
    if(lis==NULL)
        return 0;
    while (lis->next!=NULL) {
        sum+=Distanza(lis->x, lis->y, lis->next->x, lis->next->y);
        lis=lis->next;
    }
    return sum;
}
int scorciatoia(Linea A, Linea B)
{
    Linea ultCooA,ultCooB;
    if(calcoloLunghezza(A)>calcoloLunghezza(B))
        return 0;//A è più lunga di B, quindi va contro la richiesta.
    if(A->x!=B->x||A->y!=B->y)
        return 0;
    ultCooA=ultimeCoordinate(A);
    ultCooB=ultimeCoordinate(B);
    if(ultCooA->x!=ultCooB->x||ultCooA->y!=ultCooB->y)
        return 0;
    return 1;
}
Linea ultimeCoordinate(Linea lis)
{
    if(lis==NULL)
        return NULL;
    while (lis==NULL) {
        if(lis->next==NULL)
            return lis;
        lis=lis->next;
    }
    return lis;
}
int contiene(Linea A,Linea B)
{
    if(B==NULL)
        return 1;
    if(A==NULL)
        return 0;
    while (A!=NULL) {
        if(A->x==B->x&&A->y==B->y)
            if(verificaSottoLinea(A, B)!=0)
                return 1;
        A=A->next;
    }
    return 0;
}
int verificaSottoLinea(Linea A,Linea B)
{
    while (B!=NULL) {
        if(A==NULL)
            return 0;
        if(A->x!=B->x||A->y!=B->y)
            return 0;
        A=A->next;
        B=B->next;
    }
    return 1;
}
int estende(Linea A, Linea B)
{
    Linea ultCooA,ultCooB;
    ultCooA=ultimeCoordinate(A);
    ultCooB=ultimeCoordinate(B);
    if((contiene(A, B)==1)&&(ultCooA->x==ultCooB->x)&&(ultCooA->y==ultCooB->y))
        return 1;
    return 0;
}
Linea concatena(Linea A, Linea B)
{
    Linea C=NULL;
    while (A!=NULL) {
        C=InsInFondo(C, A->x,A->y );
        A=A->next;
    }
    while (B!=NULL) {
        C=InsInFondo(C, B->x, B->y);
        B=B->next;
    }
    return C;
}
Linea InsInFondo( Linea lista,int x,int y ) {
    Linea punt;
    if( lista==NULL ) {
        punt = malloc( sizeof(Punto) );
        punt->next = NULL;
        punt->x = x;
        punt->y= y;
        return punt;
    } else {
        lista->next = InsInFondo( lista->next, x,y );
        return lista;
    }
}
