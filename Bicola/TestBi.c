#include<stdio.h>
#include<stdlib.h>
#include"C:\Santiago\ClasesEnLinea\EstDat\BiCola\Elem.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\BiCola\BiCola.h"

int main(){

     BiCola b=nuevaB();

     esnuevaB(b)?puts("Si"):puts("No");

     b=formarI(1,b);

     esnuevaB(b)?puts("Si"):puts("No");

     b=formarD(b,2);
     b=formarD(b,4);
     b=formarI(3,b);
     b=formarI(5,b);

     esnuevaB(b)?puts("Si"):puts("No");

     ImpElem(izquierdo(b));
     ImpElem(derecho(b));

     b=desformarD(b);

     ImpElem(izquierdo(b));
     ImpElem(derecho(b));

     b=desformarI(b);

     ImpElem(izquierdo(b));
     ImpElem(derecho(b));




     return 0;
}
