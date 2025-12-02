//
//  ex10.cpp
//  Array
//
//  Created by Marco Gretter on 02/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 12
#define sentinella 0

int main() {
    int i;
    int quotX[N];
    int tmpmax,tmpGiorno=0;
    int cont=0;
    
    for (i=0; i<N; i++) {
        do{
            printf("Inserire valore per la casella %d di %d:\n",i+1,N);
            scanf("%d",&quotX[i]);
        }while(quotX[i]<1||quotX[i]>100);
    }
    tmpmax=quotX[0];
    
    for (i=0; i<N; i++) {
        if(quotX[i]>tmpmax){
            tmpmax=quotX[i];
            tmpGiorno=i;
        }
    }
    printf("La quotazione massima è %d ed è avvenuta al giorno %d.\n",tmpmax,tmpGiorno);
    
    for (i=0; i<N-1; i++) {
        if(quotX[i]==quotX[i+1])
            cont++;
    }
    printf("Il titolo ha avuto %d periodi di quotazione costante.\n",cont);
    
    return 0;
}
