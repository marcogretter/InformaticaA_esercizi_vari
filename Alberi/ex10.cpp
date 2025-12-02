//
//  ex10.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
//VERSIONE PERSONALE (NON SO SE SIA GIUSTA):
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef struct EL {
    int dato;
    struct EL * left,  * right;
} node;
typedef node * tree;

int verifica(tree t)
{
    if(t==NULL)
        return 1;//io onestamente ho scelto che se l'albero è vuoto  gode della proprietà, poi sono miei pensieri.
    if(t->left==NULL&&t->right==NULL)
        return 1;//onestamente non so perché io abbia scelto così ma vabbè.
    if(t->left==NULL&&t->dato>t->right->dato)
        return 0;
    if(t->right==NULL&&t->dato<t->left->dato)
        return 0;
    if(t->dato>t->right->dato||t->dato<t->left->dato)
        return 0;
    return verifica(t->left)&&verifica(t->right);
}

VERSIONE PROFESSORE (SICURO GIUSTA):
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef struct EL {
    int dato;
    struct EL * left,  * right;
} node;
typedef node * tree;
//Dichiarazione funzioni:
int max2(int a,int b);
int max3(int a,int b,int c);
int min2(int a,int b);
int min3(int a,int b,int c);
int cercaMin(tree t);
int cercaMax(tree t);
//Sviluppo funzioni:
int verifica(tree t)
{
    int max,min;
    if(t==NULL)
        return 1;
    if(t->left==NULL&&t->right==NULL)
        return 1;//se siamo arrivati alla foglia vuol dire che siamo a posto.
    if(t->left==NULL){
        max=cercaMax(t->right);
        if(t->dato>max)
            return 0;
    }
    if(t->right==NULL){
        min=cercaMin(t->left);
        if(t->dato<min)
            return 0;
    }
    return verifica(t->left)&&verifica(t->right);
}
int cercaMax(tree t)
{
    if(t->right==NULL&&t->left==NULL)
        return t->dato;
    return max3(t->dato, cercaMax(t->left), cercaMax(t->right));
}
int cercaMin(tree t)
{
    if(t->right==NULL&&t->left==NULL)
        return t->dato;
    return min3(t->dato, cercaMin(t->right), cercaMin(t->left));
}
int max2(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int max3(int a,int b,int c)
{
    return max2(a, max2(b, c));
}
int min2(int a,int b)
{
    if(a>b)
        return b;
    return a;
}
int min3(int a,int b,int c)
{
    return min2(a, min2(b, c));
}
