//
//  Risoluzione_eq_di_2_grado.cpp
//  Esercizi_vari
//
//  Created by Marco Gretter on 03/12/25.
//
/*Si realizzi un programma in linguaggio C per risolvere equazioni di secondo grado.
 In particolare, data una generica equazione di secondo grado nella forma
 ax2 + bx + c = 0
 dove a, b, c sono coefﬁcienti reali noti e x rappresenta l’incognita, il programma determini le due radici x1 ed x2 dell’equazione data, ove esse esistano.
 Si identiﬁchino tutti i casi particolari (a = 0, b= 0, c=0) e si stampino gli opportuni messaggi informativi.
*/
float calcolaQuadratoPos(int a,int b,int c);
float calcolaQuadratoNeg(int a,int b,int c);

int main() {
    int a,b,c;
    float x1,x2;
    
    printf("Calcolo di equazioni di secondo grado della forma ax^2+bx+c.\nInserisci valore di a:\n");
    scanf("%d",&a);
    printf("Il valore di b:\n");
    scanf("%d",&b);
    printf("Il valore di c:\n");
    scanf("%d",&c);
    
    printf("L'equazione: %dx^2+%dx+%d ha come soluzioni:\n",a,b,c);
    printf("x1=%f\nx2=%f\n",calcolaQuadratoPos(a, b, c),calcolaQuadratoNeg(a, b, c));
    
    return 0;
}
float calcolaQuadratoPos(int a,int b,int c)
{
    int x;
    float radiceQdr;
    int bqdr;
    int argRadiceQdr;
    
    bqdr=b*b;
    argRadiceQdr=bqdr-(4*a*c);
    if(argRadiceQdr<0){
        printf("NON si può fare.\n");
        return 0;
    }
    radiceQdr=sqrtf(argRadiceQdr);
    x=-b+radiceQdr;
    return x/2*a;
}
float calcolaQuadratoNeg(int a,int b,int c)
{
    int x;
    float radiceQdr;
    int bqdr;
    int argRadiceQdr;
    
    bqdr=b*b;
    argRadiceQdr=bqdr-(4*a*c);
    if(argRadiceQdr<0){
        printf("NON si può fare.\n");
        return 0;
    }
    radiceQdr=sqrtf(argRadiceQdr);
    x=-b-radiceQdr;
    return x/2*a;
}
