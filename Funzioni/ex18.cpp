//
//  ex18.cpp
//  Funzioni
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

int verifica(int M[][N],int r,int c);
int doppioPrimo(int n);
int primo(int n);
int scorriMat(int Mat[][N]);

int main(){
    int M[N][N];
    int r,c;
    
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            printf("Inserisci valore per la casella di riga %d colonna %d:\n");
            scanf("%d",&M[r][c]);
        }
    }
    if(scorriMat(M)!=0)
        printf("OK.\n");
    else
        printf("NON OK.\n");
    
    return 0;
}
int primo(int n)
{
    int i,cont=0;
    for (i=1; i<n; i++) {
        if(n%i==0)
            cont++;
    }
    if(cont<2)
        return 1;
    return 0;
}
int doppioPrimo(int n)
{
    int i;
    if(primo(n)==0)
        return 0;
    for (i=n; n!=0; i=i%10) {
        if(primo(i)==0)
            return 0;
    }
    return 1;
}
int verifica(int M[][N],int r,int c)
{
    if(r==0&&c==0)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r+1][c]))||(doppioPrimo(M[r+1][c+1]))||(doppioPrimo(M[r][c+1]))))
            return 0;
    if(r==N-1&&c==N-1)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r-1][c]))||(doppioPrimo(M[r][c-1]))||(doppioPrimo(M[r-1][c-1]))))
            return 0;
    if(r==0&&c==N-1)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r+1][c]))||(doppioPrimo(M[r][c-1]))||(doppioPrimo(M[r+1][c-1]))))
            return 0;
    if(r==N-1&&c==0)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r-1][c]))||(doppioPrimo(M[r][c+1]))||(doppioPrimo(M[r-1][c+1]))))
            return 0;
    if(r==0)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r+1][c]))||(doppioPrimo(M[r][c-1]))||(doppioPrimo(M[r+1][c-1]))||(doppioPrimo(M[r+1][c+1]))||(doppioPrimo(M[r][c+1]))))
            return 0;
    if(c==0)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r+1][c]))||(doppioPrimo(M[r][c+1]))||(doppioPrimo(M[r+1][c+1]))||(doppioPrimo(M[r-1][c+1]))||(doppioPrimo(M[r-1][c]))))
            return 0;
    if(r==N-1)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r-1][c]))||(doppioPrimo(M[r][c-1]))||(doppioPrimo(M[r-1][c-1]))||(doppioPrimo(M[r][c+1]))||(doppioPrimo(M[r-1][c+1]))))
            return 0;
    if(c==N-1)
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r+1][c]))||(doppioPrimo(M[r][c-1]))||(doppioPrimo(M[r+1][c-1]))||(doppioPrimo(M[r-1][c-1]))||(doppioPrimo(M[r-1][c]))))
            return 0;
    else
        if((doppioPrimo(M[r][c]))&&((doppioPrimo(M[r+1][c]))||(doppioPrimo(M[r][c-1]))||(doppioPrimo(M[r+1][c-1]))||(doppioPrimo(M[r-1][c-1]))||(doppioPrimo(M[r-1][c]))||(doppioPrimo(M[r-1][c+1]))||(doppioPrimo(M[r][c+1]))||(doppioPrimo(M[r+1][c+1]))))
            return 0;
    return 1;
}
int scorriMat(int Mat[][N])
{
    int r,c;
    for (r=0; r<N; r++) {
        for (c=0; c<N; c++) {
            if(doppioPrimo(Mat[r][c]))
                if(verifica(Mat, r, c)==0)
                    return 0;
        }
    }
    return 1;
}
