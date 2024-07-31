#include <stdio.h>
#include <stdlib.h>
#include "ColaP.h"
#include "Elem.h"

int main (){

    
    Cola q= nueva();
    esNueva(q)?puts("si"): puts("NEl");
    q=formarP(formarP(formarP(formarP(q,5,1),12,3),3,2),8,4); 

    ImpElem(primero(q));
    ImpElem(q->ult->dato);
    esNueva(q)?puts("si"): puts("NEl");
    ImpCola(q);
    return 0;
}
