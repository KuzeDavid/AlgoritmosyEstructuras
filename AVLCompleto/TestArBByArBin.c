#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBin\Elem.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBin\ArBin.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBB\ArBB.h"

int main(){
	ArBB a=vacioB();
	int opcion;
    Elem e;
    michi:
	printf("Escoge una opcion 1)Insertar 2)Eliminar 3) Imprimir preorder 4)Salir\n");
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:
			printf("\nIngresa el elemento: ");
			scanf("%d",&e);
			a=InsOrdB(e,a);
			break;
		case 2:
			printf("\nIngresa el elemento que deseas eliminar: ");
			scanf("%d",&e);
			a=Elimina(e,a);
			break;
		case 3:
			printf("\nElementos del arbol: \n");
			PreOrder(a);
			break;
		case 4:
			exit (0);
			break;
		default:
			printf("Algo malo paso mi loko");
			break;
	}
	
	goto michi;
	
	
	
}
