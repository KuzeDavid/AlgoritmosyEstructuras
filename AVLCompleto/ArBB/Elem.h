typedef char* Elem;

void fImpElem(FILE *salida, Elem e){ fprintf(salida,"%s\n",e);}
void ImpElem(Elem e){ fImpElem(stdout,e);}

int EsMenor(Elem e1, Elem e2){ return strcmp(e1,e2)<0;}



