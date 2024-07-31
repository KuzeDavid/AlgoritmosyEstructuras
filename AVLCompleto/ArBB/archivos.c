#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Elem.h"
#include"C:\Santiago\ClasesEnLinea\EstDat\ArBin\ArBin.h"
#include"ArBB.h"

int main(int argc, char* argv[]){

    char pal1[80], *pal2;
    int i=0, j=0;
    ArBB pals=vacioB();

    FILE *entrada=fopen(*++argv,"r");
    FILE *salida=fopen(*++argv,"w");



    while(fscanf(entrada,"%s",pal1)!=-1){
       pal2=(char*)malloc(sizeof(char)*80);
       strcpy(pal2,pal1);
       pals=InsOrdB(pal2,pals);
    }

    fInOrder(salida,pals);




    fclose(entrada);
    fclose(salida);

    return 0;
}
