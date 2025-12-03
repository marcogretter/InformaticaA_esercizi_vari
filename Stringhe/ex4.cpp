//
//  ex4.cpp
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
    int lun1,i,j;
    int vero=1;
    int cont1=0;
    int G=-1,g;
    
    printf("Inserisci prima stringa:\n");
    scanf("%s",str1);
    
    lun1=strlen(str1);
    g=lun1;
    
    for (i=0; i<lun1; i++) {
        cont1=0;
        for (j=0; j<lun1; j++) {
            if(str1[i]==str1[j])
                cont1++;
        }
        if(cont1>=G)
            G=cont1;
        if(cont1<=g)
            g=cont1;
    }
    printf("%s  G=%d    g=%d.\n",str1,G,g);
    return 0;
}
