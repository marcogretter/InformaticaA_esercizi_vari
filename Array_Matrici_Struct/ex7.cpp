//
//  ex7.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 5

int main(){
    int v[N];
    int i,k;
    int cont=0,tmpcont=-1;
    
    for (i=0; i<N; i++) {
        printf("Inserisci valore per la casella %d di %d:\n",i+1,N);
        scanf("%d",&v[i]);
    }
    
    for (i=0; i<N; i++) {
        cont=0;
        for (k=0; k<N; k++) {
            if(v[k]%v[i]==0)
                cont++;
        }
        if(cont>tmpcont)
            tmpcont=cont;
    }
    if(tmpcont==N)
        printf("SI\n");
    else
        printf("NO\n");
    
    return 0;
}
