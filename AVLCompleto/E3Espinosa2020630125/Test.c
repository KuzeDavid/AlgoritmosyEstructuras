#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Elem.h"
#include "ArBin.h"
#include "ArBB.h"
#include "Lista.h"

int main(int argc, char *argv[]){

	Elem e;

	ArBB a=vacioB();
	Lista l;
	
   srand(time(NULL));

   int i;

     for(i=0;i<200;i++){		
          e=rand()%15+1;
          a=InsOrdB(e,a);
          l=cons(e,l);
		}
	printf("Arbol:\n");
	InOrder(a);
	printf("Lista:\n");
	ImpElems(l);
	l=ElimRepetidos(e,l);
	ImpElems(l);
   return 0;

}
