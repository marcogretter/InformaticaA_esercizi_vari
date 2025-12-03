//
//  ex2.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20
typedef struct {
    int x;
    int y;
    int NMonete;
} punto;

typedef punto matrice[N][N];

int f(matrice M,int x,int y)
{
    int sum=0;
    int i,tempX,tempY;
    punto pun;
    tempX=x;
    tempY=y;
    pun.x=x;
    pun.y=y;
    for (i=0; i<N*N; i++) {
        if(pun.x<=N-1||pun.y<=N-1||pun.x>=0||pun.y>=0){
            sum+=M[pun.x][pun.y].NMonete;
            tempX=M[pun.x][pun.y].x;
            tempY=M[pun.x][pun.y].y;
            pun.x=tempX;
            pun.y=tempY;
        }
        else
            return sum;
    }
    return sum;
}
