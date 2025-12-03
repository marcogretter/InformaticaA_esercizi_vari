//
//  ex6.cpp
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 30

int doppia(char str[],int lun);
void assonante(char str[],int lun);

int main(){
    char str[N];
    int lun;
    
    printf("Inserisci parola:\n");
    scanf("%s",str);
    lun=strlen(str);
    
    if(doppia(str, lun))
        printf("%s è doppia.\n",str);
    return 0;
}
int doppia(char str[],int lun)
{
    int i;
    for (i=0; i<lun/2; i++) {
        if(str[i]!=str[(lun/2)+i]||lun%2!=0){
            assonante(str, lun-1);
            return 0;
        }
    }
    return 1;
}
void assonante(char str[],int lun)
{
    int i;
    for (i=0; i<lun/2; i++) {
        if(str[i]!=str[(lun/2)+i]){
            printf("%s non è né doppia né assonante.\n",str);
            exit(0);
        }
    }
    printf("%s non è doppia, ma è assonante.\n",str);
}
