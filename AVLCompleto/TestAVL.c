#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\Elem\Elem.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBin\ArBin.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\ArBB\ArBB.h"
#include"C:\Users\T450S\Desktop\2doSemestre\Algoritmos\AVLCompleto\AVL2\AVL.h"

int main (){
	AVL a=vacioB();
	Elem e, opcion;
	
    michi:
	printf("Escoge una opcion 1)Insertar 2)Eliminar 3) Imprimir por nivel 4)Salir\n");
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:
			printf("\nIngresa el elemento: ");
			scanf("%d",&e);
			a=InsAVL(e,a);
			break;
		case 2:
			printf("\nIngresa el elemento que deseas eliminar: ");
			scanf("%d",&e);
			a=EliminaAVL(e,a);
			break;
		case 3:
			printf("\nElementos del arbol por nivel: \n");
			ImpNivelPorNivelAB(a);
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
