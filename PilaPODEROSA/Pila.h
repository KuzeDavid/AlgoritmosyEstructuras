typedef struct Nodo{
	Elem dato;
	struct Nodo *sig;
}*Pila;                       // Crea una estructura apuntador pila a nodo, con un elem y un apuntador a siguiente

Pila empty(){return NULL;}  //corrobora si la pila esta vacia, y regresa vacio ;3

Pila push(Elem e, Pila l){						//recibe elem e y pila l
	Pila temp=(Pila)malloc(sizeof(struct Nodo));  //crea espacio de memoria para temp
	temp->dato=e;									//e se guarda  en temp apuntando a dato
	temp->sig=l;									//l se guarda en el espacio temp que apunta a siguiente
	return temp;									// regresa temp
}

int isempty(Pila l){return l==NULL;}				//  regresa null si l es vacia

Elem top(Pila l){return l->dato;}					// regresa l que apunta a dato, es decir el ultimo agregado, la cabeza. 

Pila pop(Pila l){return l->sig;}					//regresa l que apunta al nodo siguiente

void ImpPila(Pila p){
	if(!isempty(p)){
		ImpElem(top(p));
		ImpPila(pop(p));	
	}
	}

