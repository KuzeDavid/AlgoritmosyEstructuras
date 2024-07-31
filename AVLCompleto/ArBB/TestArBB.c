#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBin\Elem.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBin\ArBin.h"
#include"ArBB.h"

int main(){
    ArBB a=vacioB();
    Elem e;

    a=InsOrdB(24,InsOrdB(20,InsOrdB(30,InsOrdB(34,InsOrdB(10,InsOrdB(4,a))))));

    InOrder(a);


    return 0;
}
