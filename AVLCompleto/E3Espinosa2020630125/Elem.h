typedef int Elem;

void fImpElem(FILE *salida, Elem e){ fprintf(salida,"%d\n",e);}
void ImpElem(Elem e){ fImpElem(stdout,e);}

Elem scanElem(){
    Elem e;
    scanf("%d",&e);
    return e;
}
int EsIgual(Elem e1, Elem e2){return e1==e2;}
int EsMenor(Elem e1, Elem e2){return e1<e2;}

