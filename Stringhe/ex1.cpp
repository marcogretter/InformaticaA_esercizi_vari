//
//  main.cpp
//  Stringhe
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 200

int main() {
    char str1[N],str2[N];
    
    printf("Inserisci prima stringa:\n");
    scanf("%s",str1);
    printf("Inserisci seconda stringa:\n");
    scanf("%s",str2);
    printf("%s\n",strcat(str1, str2));

    return 0;
}
