//
//  Triangolo_di_Floyd.cpp
//  Esercizi_vari
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 500
#define sentinella 0
/*Scrivere un programma in linguaggio C per la rappresentazione del triangolo di Floyd. Il triangolo di Floyd è un triangolo rettangolo che contiene numeri naturali, definito riempiendo le righe del triangolo con numeri consecutivi e partendo da 1 nell’angolo in alto a sinistra.
 Si consideri ad esempio il caso N=5. Il triangolo di Floyd è il seguente:
     1
     2 3
     4 5 6
     7 8 9 10
     11 12 13 14 15
 Il programma riceve da tastiera un numero intero N. Il programma visualizza le prime N righe del triangolo di Floyd.
 Suggerimento. Si osserva che il numero di valori in ogni riga corrisponde all’indice della riga: 1 valore sulla prima riga, 2 sulla seconda, 3 sulla terza.
 Estensione: si risolva il problema usando un ciclo solo
*/
int main() {
    int n;
    int i;
    int cont=0;
    int rigatmp=1;
    do {
        printf("Inserisci numero:\n");
        scanf("%d",&n);
    } while (n<=0);
    
    for (i=1; rigatmp<=n; i++) {
        if(cont<rigatmp){
            printf("%d\t",i);
            cont++;
        }
        if(cont==rigatmp){
            printf("\n");
            rigatmp++;
            cont=0;
        }
    }
    
    return 0;
}
