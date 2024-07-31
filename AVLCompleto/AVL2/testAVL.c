#include<stdio.h>
#include<stdlib.h>
#include"C:\Santiago\ClasesEnLinea\EstDat\Elem\Elem.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\ArBin\ArBin.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\ArBB\ArBB.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\AVL2\AVL.h"

int main(){

    AVL a=vacioB();
    Elem e=1;

    while(e)a=InsAVL(e=scanElem(),a);

    printf("FactBal = %d.\n",FactBal(a));
    ImpNivelPorNivelAB(a);

    while(!esvacioB(a)){
      puts("Elemento a eliminar?");
      scanf("%d",&e);
      a=Elimina(e,a);
      puts("-----------");
      ImpNivelPorNivelAB(a);
   }

    return 0;
}
