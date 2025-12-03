//
//  ex9.cpp
//  Matrici
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100
#define M 100

int mediaElemAdiac(int Mat[N][M],int r,int c,int R,int C);
float mediaFinale(int MediaInz);


int main() {
    int R,C;
    int Mat[N][M];
    int r,c = 0;
    int tmpMax;
    int tmpR=0,tmpC=0;
    int mediaTmp,mediaMax;
    float mediaFinal;
    do{
        printf("Quante righe ha la matrice?\n");
        scanf("%d",&R);
        
        printf("Quante colonne ha la matrice?\n");
        scanf("%d",&C);}
    while(R<0||R>100||C<0||C>100);
    
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n",r+1,c+1);
            scanf("%d",&Mat[r][c]);
        }
    }
    mediaTmp=mediaElemAdiac(Mat, 0, 0, R, C);
    mediaMax=mediaFinale(mediaTmp);
    tmpMax=Mat[0][0];
    
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            printf("%d\t",Mat[r][c]);
        }
        printf("\n");
    }
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            mediaTmp=mediaElemAdiac(Mat, r, c, R, C);
            mediaFinal=mediaFinale(mediaTmp);
            if(mediaFinal>=mediaMax){
                mediaMax=mediaFinal;
                tmpMax=Mat[r][c];
                tmpR=r;
                tmpC=c;
            }
        }
    }
    printf("Il valore che ha gli elementi adiacenti con media massima è: %d a riga %d colonna %d.\n",tmpMax,r,c);
    return 0;
}
int mediaElemAdiac(int Mat[N][M],int r,int c,int R,int C)
{
    int mediaIniz;
    
    if(r==R-1&&c==C-1){
        mediaIniz=Mat[0][c]+Mat[r-1][c]+Mat[r][c-1]+Mat[r][0];
        return mediaIniz;
    }
    if(r==0&&c==0){
        mediaIniz=Mat[r][c+1]+Mat[r+1][c]+Mat[r][C-1]+Mat[R-1][c];
        return mediaIniz;
    }
    if(r==0&&c==C-1){
        mediaIniz=Mat[r+1][c]+Mat[r][c-1]+Mat[r][0]+Mat[R-1][c];
        return mediaIniz;
    }
    if(r==R-1&&c==0){
        mediaIniz=Mat[r][c+1]+Mat[r-1][c]+Mat[r][C-1]+Mat[0][c];
        return mediaIniz;
    }
    if(c==C-1){
        mediaIniz=Mat[r+1][c]+Mat[r-1][c]+Mat[r][c-1]+Mat[r][0];
        return mediaIniz;
    }
    if(c==0){
        mediaIniz=Mat[r+1][c]+Mat[r-1][c]+Mat[r][1]+Mat[r][0];
        return mediaIniz;
    }
    if(r==R-1){
        mediaIniz=Mat[r][c-1]+Mat[r][c+1]+Mat[0][c]+Mat[r-1][c];
        return mediaIniz;
    }
    if(r==0){
        mediaIniz=Mat[r][c+1]+Mat[r][c-1]+Mat[R-1][c]+Mat[1][c];
        return mediaIniz;
    }
    else{
        mediaIniz=Mat[r+1][c]+Mat[r-1][c]+Mat[r][c+1]+Mat[r][c-1];
        return mediaIniz;
    }
}
float mediaFinale(int MediaInz)
{
    return MediaInz/4;
}
