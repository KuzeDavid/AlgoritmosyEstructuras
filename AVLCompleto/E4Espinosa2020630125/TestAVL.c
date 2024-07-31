#include<stdio.h>
#include<stdlib.h>
#include"Elem.h"
#include"ArBin.h"
#include"ArBB.h"
#include"AVL.h"

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
