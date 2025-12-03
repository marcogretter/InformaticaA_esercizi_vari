//
//  ex5.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 4

typedef struct {
    int x;
    int y;
} punto;

int Multipli(int M[][N],punto pun);

int main(){
    int M[N][N];
    int r,c;
    punto point;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("inserisci valore della casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M[r][c]);
        }
    }
    printf("Inserisci coordinate del punto di cui vuoi sapere i multipli:\n\n");
    do{
        printf("Inserisci valore della riga:\n");
        scanf("%d",&point.x);
        printf("Inserisci valore della colonna:\n");
        scanf("%d",&point.y);}while(point.x<0||point.y<0||point.x>N-1||point.y>N-1);
    
    printf("Il numero di multipli di %d è %d.\n",M[point.x][point.y],Multipli(M, point));
    
    return 0;
}
int Multipli(int M[][N],punto pun)
{
    int r,c,i;
    int temp=0,cont=0;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(r==pun.x&&c==pun.y)
                temp=M[r][c];
        }
    }
    for (i=1; i<temp; i++) {
        if(temp%i==0)
            cont++;
    }
    return cont;
}
