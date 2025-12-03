//
//  ex8.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10

int main(){
    char str1[N],str2[N],str3[N];
    int i,k,j=0;
    int lun1,lun2;
    int cont=0;
    
    printf("Inserisci prima stringa:\n");
    scanf("%s",str1);
    printf("Inserisci seconda stringa:\n");
    scanf("%s",str2);
    
    lun1=strlen(str1);
    lun2=strlen(str2);
    
    
    for (i=0; i<lun1; i++) {
        cont=0;
        for (k=0; k<=lun2; k++) {
            if((str1[i]==str2[k])&&(i+1!='\0'))
                cont++;
        }
        if(cont==0){
            str3[j]=str1[i];
            j++;
        }
    }
    printf("%s\n",str3);
    
    return 0;
}
