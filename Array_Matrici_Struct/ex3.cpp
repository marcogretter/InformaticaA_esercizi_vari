//
//  ex3.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 6
float media(int M[][N],int r,int c);

int main() {
    int M1[N][N];
    int M2[N/2][N/2];
    int r,c;
    int r2=0,c2=0;
    int i=1;
    int temp;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&M1[r][c]);
        }
    }
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            temp=media(M1, r, c);
            c++;
            if(c2<N/2-1){
                M2[r2][c2]=temp;
                c2++;
            }
            else{
                M2[r2][c2]=temp;
                r2++;
                c2=0;
            }
        }
    }
    for (r=0; r<N/2; r++) {
        for (c=0; c<N/2; c++) {
            printf("%d\t",M2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
float media(int M[][N],int r,int c)
{
    int mediainiz,mediafin;
    mediainiz=M[r][c]+M[r][c+1]+M[r+1][c+1]+M[r+1][c];
    mediafin=mediainiz/4;
    return mediafin;
}
