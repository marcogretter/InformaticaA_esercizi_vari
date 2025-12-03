//
//  ex4.cpp
//  Array_Matrici_Struct
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 6
typedef struct {
    int R,G,B;
} colore;

typedef colore immagine[N][N];

int main() {
    immagine imm;
    int maxK=0;
    int r,c,s=0;
    int r1,c1;
    int cont=0;
    
    while (s<N) {
        for (r=0; r<N; r++) {
            for (c=0; c<N; c++) {
                for (r1=r; r1<s+r; r1++) {
                    for (c1=c; c1<s+c; c1++) {
                        if((imm[r1][c1].R==imm[r][c].R)||(imm[r1][c1].B==imm[r][c].B)||(imm[r1][c1].G==imm[r][c].G))
                            cont++;
                        else{
                            if(cont>maxK)
                                maxK=cont;
                            cont=0;
                        }
                    }
                }
            }
        }
        s++;
    }
    printf("Il massimo K è: %d\n",maxK);
    return 0;
}
