//
//  main.cpp
//  Ricorsione
//
//  Created by Marco Gretter on 02/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 5

int sommaNumPari(int num);

int main(){
    int n;
    printf("Inserisci un numero:\n");
    scanf("%d",&n);
    printf("La somma dei suoi numeri pari è: %d.\n",sommaNumPari(n));
}

int sommaNumPari(int num)
{
    if(num==1)
        return 2;
    return 2*num+sommaNumPari(num-1);
}
