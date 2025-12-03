//
//  main.cpp
//  Esercizi_vari
//
//  Created by Marco Gretter on 03/12/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 50
#define sentinella 0
/*La successione di Padovan è la serie di numeri naturali P(n)
definita dai valori iniziali:
P(0) = P(1) = P(2) = 1
E per tutti i valori di n > 3 dalla relazione:
P(n) = P(n-2) + P(n-3)
I primi valori della successione sono:
1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, …

Scrivere un programma che chiede all’utente un numero intero e verifica se il numero inserito (che deve essere positivo) è uno degli elementi della successione di Padovan.
*/

int main() {
    int i=0;
    int v[N];
    int num;
    do {
        printf("Inserisci un numero:\n");
        scanf("%d",&num);
    } while (num<1);
    v[0]=1;
    v[1]=1;
    v[2]=1;
    for (i=3; i<N; i++) {
        v[i]=v[i-2]+v[i-3];
    }
    for (i=0; i<N; i++) {
        if(num==v[i]){
            printf("è presente.\n");
            num=0;
        }
    }
    if(num!=0)
        printf("Non è presente.\n");
    return 0;
}
