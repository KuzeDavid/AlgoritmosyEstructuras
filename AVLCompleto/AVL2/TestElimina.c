#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\Elem\Elem.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBin\ArBin.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBB\ArBB.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\AVL2\AVL.h"

int main(){
   ArBB a=vacioB();

   Elem e;

   while(e)
      a=InsAVL(e=scanElem(),a);

   puts("-----------");
   ImpElem(ElemMasDerechoB(a));

   puts("-----------");
   ImpElem(ElemMasIzquierdoB(a));


   while(!esvacioB(a)){
      puts("Elemento a eliminar?");
      a=EliminaAVL(e=scanElem(),a);
      puts("-----------");
      ImpNivelPorNivelAB(a);
   }

   return 0;
}
