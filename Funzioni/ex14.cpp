//
//  ex14.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50

int verificaTD(char str1[],char str2[],int lun1,int lun2);

int main(){
    char str1[N],str2[N],str3[N];
    int lun1,lun2;
    int i;
    int cont=0;
    
    printf("Inserisci prima parola:\n");
    scanf("%s",str1);
    printf("Inserisci seconda parola:\n");
    scanf("%s",str2);
    lun1=strlen(str1);
    lun2=strlen(str2);
    
    if(verificaTD(str1, str2, lun1,lun2))
        printf("%s e %s sono TD.\n",str1,str2);
    else
        printf("%s e %s NON sono TD.\n",str1,str2);
    return 0;
}
int verificaTD(char str1[],char str2[],int lun1,int lun2)
{
    int i,k;
    for (i=0; i<lun1; i++) {
        for (k=0; k<lun2; k++) {
            if(str1[i]==str2[k])
                return 0;
        }
    }
    return 1;
}
