//
//  ex3.cpp
//  Stringhe
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 200

int main() {
    char str1[N],str2[N];
    int lun1,lun2,i,j;
    int vero=1;
    int cont1=0,cont2=0;
    
    printf("Inserisci prima stringa:\n");
    scanf("%s",str1);
    printf("Inserisci seconda stringa:\n");
    scanf("%s",str2);
    
    lun1=strlen(str1);
    lun2=strlen(str2);
    
    if(lun1!=lun2){
        vero=3;
    }
    for (j=0; j<lun1; j++) {
        cont1=0;
        cont2=0;
        for (i=0; i<lun1; i++) {
            if(str1[j]==str1[i])
                cont1++;
            if(str1[j]==str2[i])
                cont2++;
        }
        if(cont1!=cont2){
            vero=3;
        }
    }
    if(vero==1)
        printf("Le parole sono anagrammi.\n");
    else
        printf("Le parole NON sono anagrammi.\n");
    return 0;
}
