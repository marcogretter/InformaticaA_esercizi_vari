//
//  Verifica_di_anagrammi.cpp
//  Esercizi_vari
//
//  Created by Marco Gretter on 03/12/25.
//
/*
 Scrivere un programma in C:
 • •
 Acquisire due stringhe
 Verificare se le stringhe sono anagrammi*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 500

int main(){
    char v1[N],v2[N];
    int i,k,cont2=0;
    int cont1=0;
    int cont=0;
    int lun1,lun2;
    
    printf("Inserire prima parola:\n");
    scanf("%s",v1);
    printf("Inserire seconda parola:\n");
    scanf("%s",v2);
    
    lun1=strlen(v1);
    lun2=strlen(v2);
    
    if(lun1!=lun2)
        printf("Le due parole NON sono anagrammi.\n");
    
    for (i=0; i<lun1; i++) {
        cont1=0;
        cont2=0;
        for (k=0; k<lun2; k++) {
            if(v1[i]==v2[k])
                cont1++;
            if(v1[i]==v1[k])
                cont2++;
        }
        if(cont1!=cont2&&cont==0){
            printf("Le due parole NON sono anagrammi.\n");
            cont++;
        }
    }
    if(cont==0)
        printf("Le due parole sono anagrammi.\n");
    return 0;
}
