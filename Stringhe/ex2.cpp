//
//  ex2.cpp
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
    char str1[N];
    int lun1,i;
    int vero=1;
    
    printf("Inserisci prima stringa:\n");
    scanf("%s",str1);
    lun1=strlen(str1);
    
    for (i=0; i<lun1; i++) {
        if(str1[i]!=str1[lun1-1-i])
            vero=3;
    }
    if(vero==1)
        printf("%s è palindroma.\n",str1);
    else
        printf("%s NON è palindroma.\n",str1);
    return 0;
}
