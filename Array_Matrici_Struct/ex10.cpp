//
//  ex10.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 2

int main(){
    int M1[N][N],M2[N][N];
    int r,c;
    int k;
    int cont=0;
    
    printf("Prima matrice:\n\n");
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore della casella di riga %d colonna %d della prima matrice:\n",r+1,c+1);
            scanf("%d",&M1[r][c]);
        }
    }
    
    printf("Seconda matrice:\n\n");
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore della casella di riga %d colonna %d della seconda matrice:\n",r+1,c+1);
            scanf("%d",&M2[r][c]);
        }
    }
    printf("Quanti valori sono diversi tra le due matrici?\n");
    scanf("%d",&k);
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(M1[r][c]!=M2[r][c])
                cont++;
        }
    }
    if(cont==k)
        printf("Le due matrici sono identiche a meno di %d elementi.\n",k);
    else
        printf("Le due matrici non sono identiche a meno di %d elementi.\n",k);
    return 0;
}
