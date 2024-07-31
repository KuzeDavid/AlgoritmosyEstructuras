#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "ColaP.h"


int main (){

    
    Cola q= nueva();
    esNueva(q)?puts("si\n"): puts("NEl\n");
    q=formarP(formarP(formarP(formarP(q,5,1),12,3),3,2),8,4); 

    ImpElem(primero(q));
    ImpElem(q->ult->dato);
    esNueva(q)?puts("si\n"): puts("NEl\n");
    ImpCola(q);
    
    return 0;
}
