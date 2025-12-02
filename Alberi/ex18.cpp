//
//  ex18.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct EL {
    int dato;
    struct EL * left, * right;
} node;
typedef node * tree;

int verificaPres(tree t,int elem);
int fT1(tree t1,tree t2);
int fT2(tree t1,tree t2);

int fin(tree t1,tree t2)
{
    if((fT1(t1, t2)==0)||(fT2(t1, t2)==0))
        return 0;
    return 1;
}
int fT2(tree t1,tree t2)//verifica se tutti gli elementi di T2 sono presenti in T1.
{
    if(t1==NULL&&t2==NULL)
        return 1;
    if(t2==NULL)
        return 1;
    if(t1==NULL)
        return 0;
    if(verificaPres(t1, t2->dato)!=0)
        return fT2(t1, t2->right)&&fT2(t1, t2->left);
    return 0;
}
int fT1(tree t1,tree t2)//verifica se tutti gli elementi di T1 sono presenti in T2.
{
    if(t1==NULL&&t2==NULL)
        return 1;
    if(t1==NULL)
        return 1;
    if(t2==NULL)
        return 0;
    if(verificaPres(t2, t1->dato)!=0)
        return fT1(t2, t1->right)&&fT1(t2, t1->left);
    return 0;
}

int verificaPres(tree t,int elem)
{
    if(t==NULL)
        return 0;
    if(t->dato==elem)
        return 1;
    return verificaPres(t->left, elem)||verificaPres(t->right, elem);
}
