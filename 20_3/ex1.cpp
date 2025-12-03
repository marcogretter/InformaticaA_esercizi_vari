//
//  main.cpp
//  20_3
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 20

int f(int v[])
{
    int i;
    int maxTmp=0,cont=0;
    
    for (i=1; i<N; i++) {
        if(v[i-1]<v[i])
            cont++;
        else{
            if(cont>maxTmp)
                maxTmp=cont;
            cont=0;
        }
    }
    return maxTmp;
}
