//
//  ex16.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct TB {
      long int fiocchi, portata;
      struct TB *left, *right;
} Ramo;

typedef Ramo * Tree;

int somma(Tree t)
{
    if(t==NULL)
        return 0;
    return t->fiocchi+somma(t->right)+somma(t->left);
}
int resiste(Tree t)
{
    if(t==NULL)
        return 1;
    if(t->portata<somma(t))
        return 0;
    return resiste(t->right)+resiste(t->left);
}
int equilibrato(int a,int b)
{
    if(a==0&&b==0)
        return 1;
    if(a==0||b==0)
        return 0;
    if(((float)a/b<3.0/2)&&((float)a/b)>2.0/3)
        return 1;
    return 0;
}
int f(Tree t)
{
    if(t==NULL)
        return 1;
    if(equilibrato(somma(t->left), somma(t->right))!=1)
        return 0;
    return f(t->left)&&f(t->right);
}
