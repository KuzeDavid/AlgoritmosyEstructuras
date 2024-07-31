#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Elem.h"
#include"Circular.h"

typedef Circular Dado;

int Tirada(Dado);
Dado DadoNuevo(int);

int MyModule(int a , int b);

int main(){
	Elem e;
    int i,a,b,vueltas,c;
    
    Circular C=nuevaC();
//	Circular R;
   // formarC(,)
   
	printf("TABLERO:\n");
   	printf(" V= VERDE  N=NEGRO Y R=ROJO\n");
	printf("      [3-R][6-N][9-R][12-N][15-R][18-N][21-R][24-N][27-R][30-N][33-R][36-N]\n");
	printf("      [2-N][5-R][8-N][11-R][14-N][17-R][20-N][23-R][26-N][29-R][32-N][35-R]\n");
	printf("[0 -V][1-R][4-N][7-R][10-N][13-R][16-N][19-R][22-N][25-R][28-N][31-R][34-N]\n");
	printf(" \n");
   
   long saldo;
       printf("Ingrese su saldo actual:");
       scanf("%d", &saldo);
       printf("\n");
    
    
    
   
  
   				
   
   

   C=formarC(formarC(formarC(formarC
   (formarC(formarC(formarC(formarC(formarC(formarC(formarC(formarC
   (formarC(formarC(formarC(formarC(formarC(formarC(formarC(formarC
   (formarC(formarC(formarC(formarC(formarC(formarC(formarC(formarC(formarC
   (formarC(formarC(formarC(formarC(formarC(formarC(formarC(formarC(C,
   0),32),15),19),4),21),2),25),17),34),6),27),13),36),11),30),8),23),10)
   ,5),24),16),33),1),20),14),31),9),22),18),29),7),28),12),35),3),26);
  
  srand(time(NULL));
  vueltas=rand()%36;
  // printf("\n\n %d \n\n",vueltas);   Solo para ver que numero cae el random
  
    for(i=0;i<=vueltas;i++)
    	C=rotacionC(C);                //Ingrese imp elem del primero para ver como da vueltitas la ruleta
   	
   	ImpElem(primeroC(C));
   	
   	
   	
   	
	/* 
       long saldo;
       printf("Ingrese su saldo actual:");
       scanf("%d", &saldo);
       printf("\n");
       return saldo;*/

   	
    //nuevaC(R);	
    //R=formarC(R,0);
  	//R=ImpElem();
	
	/*printf("Escriba a y b en el orden correcto, Ejemplo: a mod b=");
	printf("\nA=");
	scanf("%d",&a);
	printf("\nB=");
	scanf("%d",&b);
	
	c= a%b;
	
	
	printf("El modulo sera: %d \n",c);
*/
    /*Dado d=DadoNuevo(6);

    srand(time(NULL));

    while(1){
       printf("Tirada: %d\n",Tirada(d));
       getchar();
    }*/


	

    return 0;
}

Dado DadoNuevo(int n){
    int i;
    Dado d=nuevaC();
    for(i=1;i<=n;i++)
        d=formarC(d,i);
    return d;
};

int Tirada(Dado d){
      int i,n=rand();

      for(i=1;i<=n;i++)
        d=rotacionC(d);
      return primeroC(d);
};


