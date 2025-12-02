//
//  ex5.cpp
//  Alberi
//
//  Created by Marco Gretter on 02/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define N 20

typedef struct Elemento {
    int dato;
    struct Elemento * left, * center, * right;
} Nodo;
typedef Nodo * Tree;

//dichiarazione funzioni:


//Sviluppo funzioni:
int isobatoAux( Tree t, int * depth ) {
  int dl, dc, dr, il, ic, ir;    /* 3 profondità per i rami e 3 booleani */
  if ( t == NULL ) {
    *depth = 0;                  /* Un albero vuoto è isobato di profondità 0 */
    return 1;
  }
  il = isobatoAux(t->left,   &dl);  /* Controlliamo l'isobaticità dei rami    */
  ic = isobatoAux(t->center, &dc);  /* Memorizzando le (eventuali) profondità */
  ir = isobatoAux(t->right,  &dr);
  if ( !il || !ic || !ir || dl != dc || dc != dr )
    return 0;
  *depth = dl + 1;  /* tanto le profondità sono tutte uguali */
    
  return 1;
}
int isobato ( Tree t ) {
 int foo=0;
 return isobatoAux( t, &foo );
}
