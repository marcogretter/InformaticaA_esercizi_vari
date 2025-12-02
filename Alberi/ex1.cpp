//
//  ex1.cpp
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

typedef struct nodo {
    int info;
    struct nodo *left, *right;
} NODO;
typedef NODO *tree;

//dichiarazione funzioni:
int max3(int a,int b,int c);
int max2(int a,int b);
int cercaMax(tree t);
int sommaNodi(tree t);


//sviluppo funzioni:
int sommaNodi(tree t)
{
    if(t==NULL)
        return 0;
    if(t->left==NULL&&t->right==NULL)
        return t->info;
    return t->info+sommaNodi(t->left)+sommaNodi(t->right);
}
int cercaMax(tree t)
{
    if(t==NULL)
        return -1;
    return max3(t->info, cercaMax(t->right), cercaMax(t->left));
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
