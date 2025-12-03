//
//  ex13.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50

int quanteVolte(char str[],char lettera,int lun);
int valida(char str[],int numero[],int lun);
int punteggio(char str[],int valore[],int lun);

int main(){
    int numero[26] = {9,2,2,4,12,2,3,2,9,1,1,4,2,6,8,2,1,6,4,6,4,2,2,1,2,1};
    int valore[26] = {1,2,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    char str1[N];
    int lun1;
    
    printf("Inserisci parola in maiuscolo:\n");
    scanf("%s",str1);
    lun1=strlen(str1);
    if(valida(str1, numero,lun1)==0)
        printf("Il punteggio è 0. Parola non valida.\n");
    if(valida(str1, numero, lun1)!=0)
        printf("La parola è valida e il punteggio è: %d.\n",punteggio(str1, valore, lun1));
    
    return 0;
}
int valida(char str[],int numero[],int lun)
{
    int i,temp,tempNumVolte;
    for (i=0; i<lun; i++) {
        tempNumVolte=quanteVolte(str, str[i], lun);
        temp=str[i]-'A';
        if(numero[temp]<tempNumVolte)
            return 0;
    }
    return 1;
}
int quanteVolte(char str[],char lettera,int lun)
{
    int i,cont=0;
    for (i=0; i<=lun; i++) {
        if(str[i]==lettera)
            cont++;
    }
    return cont;
}
int punteggio(char str[],int valore[],int lun)
{
    int i;
    int sum=0,temp;
    for (i=0; i<lun; i++) {
        temp=str[i]-'A';
        sum+=valore[temp];
    }
    return sum;
}
