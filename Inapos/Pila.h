typedef struct Nodo{
	Elem dato;
	struct Nodo *sig;
} *Pila;

Pila empty(){return NULL;}
Pila push(Elem e, Pila l){
	Pila temp=(Pila)malloc(sizeof(struct Nodo));
	temp->dato=e;
	temp->sig=l;
	return temp;
}

int isempty(Pila l){return l==NULL;}

Elem top(Pila l){return l->dato;}

Pila pop(Pila l){return l->sig;}

void ImpPila(Pila p){
	if(!isempty(p)){
		ImpElem(top(p));
		ImpPila(pop(p));
		
	}
}
