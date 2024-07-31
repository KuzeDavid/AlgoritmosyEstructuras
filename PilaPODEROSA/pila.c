#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "Pila.h"


int main(){
	int opcion;
	Pila l;
	l=empty();
	Elem e,respuesta;
	printf("Este programa simula una pila\n\n");
	do{
			printf("Menu\nSelecciona una opcion:\n\n");
		printf("1. Insertar a la Pila (Push)\n");
		printf("2. Mostrar pila\n");
		printf("3. Elminar elemento \n");
		printf("4. salir\n");
		scanf("%d",&respuesta);
		while(respuesta>3 || respuesta<1){
			printf("Error, Introduce un nuevo valor:");
			scanf("%d",&respuesta);
		}
		switch(respuesta){
			case 1:
				printf("Dame el elemento:\n");
				scanf("%d",&e);
				l=push(e,l);
				system("cls");
				break;
			case 2:
				printf("La pila es: ");
				ImpPila(l);
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 3:
				l=pop(l);
				system("cls");
				break;
			case 4:
				printf("Salir\n");
				exit(0);
				break;
			default:
				printf("Error\n");
				/*En teoria nunca se podria acceder a esta opcion*/
				break;
		}
	}while(1);
	return 0;
}


