#include<stdio.h>
#include<stdlib.h>
#include"Elem.h"
#include"ArBin.h"
#include"ArBB.h"

int main(){
    ArBB a=vacioB();
    int b=0,i=0,e=0;
    

    //a=InsOrdB(24,InsOrdB(20,InsOrdB(30,InsOrdB(34,InsOrdB(10,InsOrdB(4,a))))));

	// InOrder(a);
	b=rand()%11;
	
	while(i<=0)
	{
		a=InsOrdB(((rand()%500)+1),a);
		
		i++;
	}
	InOrder(a);
	
	printf("Dame el dato a buscar:");
	scanf("%d \n",&e);
	
	if(Estaen=='1'){
		printf("Esta");
	}
	else if(Estaen=='0') {printf("No esta");
	}
   
       


    return 0;
}
