#include<stdio.h>
#include<stdlib.h>
#include"Elem.h"
#include"ArBin.h"

int main(){
    ArBin a,b,c;
    ArBin x=consB(10,consB(20,consB(1,vacioB(),vacioB()),consB(4,vacioB(),vacioB())),
                 consB(5,vacioB(),consB(6,vacioB(),vacioB())));
/*
    b=consB(50,vacioB(),vacioB());

    c=consB(200,vacioB(),vacioB());

    a=consB(100,b,c);

    esvacioB(izquierdoB(a))?puts("Si."):puts("No.");
    esvacioB(derechoB(izquierdoB(a)))?puts("Si."):puts("No.");


    ImpElem(raiz(x));
    ImpElem(raiz(izquierdoB(x)));
    ImpElem(raiz(derechoB(x)));

    printf("%d\n",NumElemsB(a));
    printf("%d\n",NumElemsB(x));
*/
    puts("Pre");
    PreOrder(x);
    puts("In");
    InOrder(x);
    puts("Post");
    PostOrder(x);



    return 0;
}
