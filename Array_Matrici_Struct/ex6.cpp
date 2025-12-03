//
//  ex6.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100

int main(){
    char str1[N],str2[N];
    int lun1,lun2,i;
    int cont=0;

    //Scrivere un programma che chiede una stringa e stampa SI se la stringa è composta da solo due sottostringhe identiche consecutive non sovrapposte, NO altrimenti.
    printf("Inserisci parola:\n");
    scanf("%s",str1);
    lun1=strlen(str1);
    
    for (i=0; i<lun1/2; i++) {
        if(str1[i]==str1[lun1/2+i])
            cont++;
    }
    if(cont==((lun1/2)))
        printf("SI\n");
    else
        printf("NO\n");
    
    
    //Scrivere un programma che chiede una stringa e stampa SI se la stringa è composta da solo due sottostringhe identiche consecutive non sovrapposte messe in ordine inverso, NO altrimenti
    
    printf("Inserisci una seconda stringa:\n");
    scanf("%s",str2);
    
    lun2=strlen(str2);
    cont=1;
    for (i=0; i<lun2/2-1; i++) {
        if(str2[i]==str2[lun2-i-1])
            cont++;
    }
    
    if(cont==lun2/2)
        printf("SI\n");
    else
        printf("NO\n");
    
    return 0;
}
