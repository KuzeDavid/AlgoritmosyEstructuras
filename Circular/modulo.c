#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int MyModule(int a , int b);

int main(int argc, char *argv[]) {
	
	int a,b,c;
	
	printf("Escriba a y b en el orden correcto, Ejemplo: a mod b=");
	printf("\nA=");
	scanf("%d",&a);
	printf("\nB=");
	scanf("%d",&b);
	
	c= MyModule(a,b);
	
	printf("El modulo sera: %d",c);
	
	return 0;
}

int MyModule(int a, int b){
	
	int r=0,i,t=0;
	
   for(i=1;t<a-b;i++){
   	t=b*i;
   	
   }
   r=a-t;
   
   return r;
}; 
