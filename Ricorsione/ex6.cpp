//
//  ex6.cpp
//  Ricorsione
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

//dichiarazione funzioni:
int powerEsp(int n,int esp);
int pila(int n);
int torre(int n);
int tower(int n,int x);

int main(){
    int n;
    printf("Inserisci numero:\n");
    scanf("%d",&n);
    
    printf("%d\n",pila(n));
    printf("%d\n",torre(n));
    return 0;
}
//Sviluppo funzioni:
int pila(int n)
{
//    caso base:
    if(n==1)
        return 1;
//    passo induttivo:
    return powerEsp(n, pila(n-1));
}
int torre(int n)
{
    if(n==1)
        return n;
    return tower(n, n);
}
int tower(int n,int x)
{
    if(x==1)
        return n;
    return powerEsp(n,tower(n,x-1));
}
int powerEsp(int n,int esp)
{
    if(esp==0)
        return 1;
    return n*pow(n, esp-1);
}
