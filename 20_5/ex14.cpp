//
//  ex14.h
//  20_5
//
//  Created by Marco Gretter on 03/12/25.
//
#include <stdio.h>
#include <stdlib.h>
#define N 5

float media(int v[]);
void f(int v[]);
float ValAss(float a);

int main(){
    int v[N]={1,0,3,4,5},i;
    f(v);
    for (i=0; i<N; i++) {
        printf("%d\t",v[i]);
    }
    printf("\n");
    return 0;
}
void f(int v[])
{
    int i;
    printf("La media è: %f\n",media(v));
    float dieciPerCento,tmp;
    dieciPerCento=media(v)*0.1;
    float med;
    printf("%f\n",dieciPerCento);
    med=media(v);
    for (i=0; i<N; i++) {
        tmp=v[i]-med;
        tmp=ValAss(v[i]-med);
        if(v[i]-med>dieciPerCento)
            v[i]=0;
    }
}
float media(int v[])
{
    int i;
    float sum=0,cont=0;
    for (i=0; i<N; i++) {
        sum+=v[i];
        cont++;
        if(v[i]==0)
            cont--;
    }
    return sum/cont;
}
float ValAss(float a)
{
    if(a<0)
        return (-1)*a;
    return a;
}
