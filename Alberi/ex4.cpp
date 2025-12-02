//
//  ex4.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef struct EL    {
    int dato;
    struct EL *left;
    struct EL *right;
} Node;

typedef Node *tree;
//dichiarazione funzioni:
int verificaIsobato(tree t);
int contaProfondita(tree t);
//Sviluppo funzioni:
int verificaIsobato(tree t)
{
    if(contaProfondita(t)==-1)
        return 0;
    return 1;
}
int contaProfondita(tree t)
{
    int s,d;
    if(t==NULL)
        return 1;
    d=contaProfondita(t->right);
    s=contaProfondita(t->left);
    if(d==-1||s==-1)
        return -1;
    if(d==s)
        return d+1;
    if(d==0)
        return s+1;
    if(s==0)
        return d+1;
    return -1;//le due profondità sono diverse.
}

VERSIONE PIù LOGICA:

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct EL    {
    int dato;
    struct EL *left;
    struct EL *right;
} Node;
typedef Node *tree;

int maxProf(tree t);
int minProf(tree t);
int isobato(tree t);

int maxProf(tree t)
{
    int D,S;
    if(t==NULL)
        return 0;
    D=maxProf(t->right);
    S=maxProf(t->left);
    
    if(D>S)
        return 1+D;
    return 1+S;
}
int minProf(tree t)
{
    int D,S;
    if(t==NULL)
        return 0;
    D=minProf(t->right);
    S=minProf(t->left);
    if(D>S)
        return S+1;
    return D+1;
}
int isobato(tree t)
{
    if(maxProf(t)==minProf(t))
        return 1;
    return 0;
}
