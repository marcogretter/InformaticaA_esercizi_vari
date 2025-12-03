//
//  main.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 4
typedef int MATR[N][N];

int main() {
    MATR M;
    int r,c;
    int cont=0,temp,temp2;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la riga %d colonna %d:\n",r,c);
            scanf("%d",&M[r][c]);
        }
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(M[r][c]==0)
                cont++;
        }
    }
    printf("%d\n",cont);
    printf("La matrice è:\n");
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("%d\t",M[r][c]);
        }
        printf("\n");
    }
    
    temp=cont;
    temp2=cont/2;
    cont=0;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(M[r][c]==0&&cont==0){
                printf("Il primo zero è a riga %d colonna %d.\n",r,c);
            }
            if(M[r][c]==0&&cont==temp-1){
                printf("L'ultimo zero è a riga %d colonna %d.\n",r,c);
            }
            if(M[r][c]==0&&temp2==cont){
                printf("Lo zero in posizione mediana è a riga %d colonna %d.\n",r,c);
            }
            if(M[r][c]==0)
                cont++;
        }
    }
    return 0;
}
