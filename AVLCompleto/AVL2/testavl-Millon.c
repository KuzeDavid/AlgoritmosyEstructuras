#include<stdio.h>
#include<stdlib.h>
#include"C:\Santiago\ClasesEnLinea\EstDat\Elem\Elem.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\ArBin\ArBin.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\ArBB\ArBB.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\AVL2\AVL.h"


int main(){

 //   AVL a=InsAVL(30,InsAVL(10,InsAVL(20,nuevoAB())));
 //   AVL a=InsOrdDB(5,InsOrdDB(10,InsOrdDB(20,InsOrdDB(1000,InsOrdDB(200,InsOrdDB(30,nuevoAB()))))));
//    AVL a=InsAVL(5,InsAVL(10,InsAVL(20,InsAVL(1000,InsAVL(200,InsAVL(30,nuevoAB()))))));

      AVL a = nuevoAB();
      int i;
      Elem e;
      srand(time(NULL));

      for(i=1;i<=1000000;i++){
         a=InsAVL(rand(),a);
        // printf("Altura = %d\t FactBal = %d\n",AlturaAB(a), FactBal(a));
         printf("%d\n",i);
      }
         EsAVL(a)?printf("Es AVL.\n"):printf("No es AVL.\n");

      return 0;
}
