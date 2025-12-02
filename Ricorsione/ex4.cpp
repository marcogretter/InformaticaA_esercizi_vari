//
//  ex4.cpp
//  Ricorsione
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 3

int cobin(int n, int k);

int main() {
    int n, k;
       for (n=0; n<=N; n++) {
              for (k=0; k<=n; k++)
                     printf("%d\t", cobin(n, k));
              printf("\n");
       }

        return 0;
}
int cobin(int n, int k) {
    if(n<k || n<0 || k<0){
        printf("Errore\n");
        return 0;
    }
    if  (k==0 || k==n)
        return 1;
    else
        return cobin(n-1, k-1) + cobin(n-1, k);
}
