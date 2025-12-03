//
//  ex5.cpp
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
    int lun1,lun2;
    int vero=1;
    int i;
    int cont1=0,cont2=0;
    
    printf("Inserisci prima parola:\n");
    scanf("%s",str1);
    printf("Inserisci seconda parola:\n");
    scanf("%s",str2);
    
    lun1=strlen(str1);
    lun2=strlen(str2);
    
    if(lun1!=lun2)
        vero=4;
    
    for (i=0; i<lun1; i++) {
        if(str1[2*i]!=str2[2*i])
            cont1++;
    }
    if(cont1==0)
        printf("le due parole sono inversamente compatibili.\n");
    for (i=0; i<lun1-1; i++) {
        if(str1[2*i+1]!=str2[2*i+1])
            cont2++;
    }
    if(cont2==0)
        printf("Le due parole sono direttamente compatibili.\n");
    if(vero==4&&cont1!=0&&cont2!=0)
        printf("Le due parole non sono Hertzianamente compatibili.\n");
    return 0;
}
