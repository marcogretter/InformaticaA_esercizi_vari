//
//  ex11.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50

int analizzoStringhe(char str1[],char str2[],int lun1);
int verificaUguaglianza(char str1[],char str2[],int lun1,int lun2);

int main(){
    char S1[N],S2[N],S3[N];
    int lun1,lun2,ptoDiSpacco,i;
    
    printf("Inserisci prima parola:\n");
    scanf("%s",S1);
    lun1=strlen(S1);
    
    printf("Inserisci seconda parola:\n");
    scanf("%s",S2);
    lun2=strlen(S2);
    
    if(verificaUguaglianza(S1, S2, lun1, lun2)){
        printf("%s è inclusa in %s dal carattere %d.\n",S2,S1,analizzoStringhe(S1, S2, lun1));
        ptoDiSpacco=analizzoStringhe(S1, S2, lun1)-1;
        for (i=0; i<ptoDiSpacco; i++) {
            S3[i]=S1[i];
        }
        for (i=ptoDiSpacco; i<=lun1; i++) {
            S3[i]=S1[i+lun2];
        }
    }
    printf("%s\n",S3);
    
    return 0;
}
int analizzoStringhe(char str1[],char str2[],int lun1)
{
    int i;
    
    for (i=0; i<=lun1; i++) {
        if(str1[i]==str2[0])
            return i+1;
    }
    return -1;
}
int verificaUguaglianza(char str1[],char str2[],int lun1,int lun2)
{
    int i,j=0;
    for (i=0; i<=lun1; i++) {
        if(str1[i]==str2[j])
            j++;
        if(j==lun2)
            return 1;
    }
    return 0;
}
