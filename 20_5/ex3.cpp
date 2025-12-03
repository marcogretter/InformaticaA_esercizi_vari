//
//  ex3.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define R 4
#define C 5

int forz(int M[R][C],int r,int c);
int fver(int M[R][C],int r,int c);
void stampaMat(int M[R][C]);

int main(){
    int M[R][C]={0,0,0,22,0,
                 0,0,22,0,0,
                 0,0,0,0,0,
                 0,22,22,0,0};
    int num=1,r,c;
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            if(forz(M, r, c)||fver(M, r, c)){
                M[r][c]=num;
                num++;
            }
        }
    }
    stampaMat(M);
    return 0;
}
int forz(int M[R][C],int r,int c)
{
    if(M[r][c+1]==0&&M[r][c]==0&&((r==0||c==0)||M[r][c-1]==22))
        return 1;
    return 0;
}
int fver(int M[R][C],int r,int c)
{
    if(M[r][c]==0&&M[r+1][c]==0&&(r==0||c==0||M[r-1][c]==22))
        return 1;
    return 0;
}
void stampaMat(int M[R][C])
{
    int r,c;
    for (r=0; r<R; r++) {
        for (c=0; c<C; c++) {
            if(M[r][c]==22)
                printf("*\t");
            if(M[r][c]==0)
                printf("_\t");
            if(M[r][c]!=22&&M[r][c]!=0)
                printf("%d\t",M[r][c]);
        }
        printf("\n");
    }
}
