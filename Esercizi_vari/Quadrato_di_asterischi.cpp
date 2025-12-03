//
//  Quadrato_di_asterischi.cpp
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
/*Si realizzi un programma che legga da tastiera un valore intero N, compreso tra 1 e 10, e stampi a video un “quadrato di asterischi” di lato N.
 Esempio con N=5
     *****
     *****
     *****
     *****
     *****
 Si realizzi una variante del programma per visualizzare solo i lati del quadrato
 Si realizzi una variante del programma per visualizzare un triangolo isoscele rettangolo di lato N
 Si realizzi una variante del programma per visualizzare solo i lati di un triangolo isoscele rettangolo di lato N
*/
float calcolaQuadratoPos(int a,int b,int c);
float calcolaQuadratoNeg(int a,int b,int c);

int main() {
    int n;
    int r,c;
    do {
        printf("Inserisci numero:\n");
        scanf("%d",&n);
    } while (n<1||n>10);
    for (r=0; r<n; r++) {
        for (c=0; c<n; c++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
