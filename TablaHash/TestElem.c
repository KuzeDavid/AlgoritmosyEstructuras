#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Elem.h"
#include"ListaTH.h"
#include"TablaH.h"

int main(int argc, char *argv[]){

    int i, n=20;
    Elem e;
    TablaH t=consTH(n);
    FILE *ent=fopen("ElemsQuims.c","r");
    int llave;
    char ident[3];

    for(i=0;i<=n;i++){
       e.sim=(char*)malloc(3);
       e.nombre=(char*)malloc(15);
       fscanf(ent,"%s%s%d%f",e.sim,e.nombre,&e.na,&e.ma);  // LeeElem
       llave=e.sim[1]%n;
       t[llave]=cons(e,t[llave]);
    };

    ImpTablaH(t,n);
while(1){
    printf("Dame la llave del elemento que quieres consultar:");
    scanf("%s",ident);
    Consulta(ident,t,n);
}


    return 0;


    for(i=0;i<=n;i++){
        printf("%d:\n",i);
        ImpElems(t[i]);
    }

}
