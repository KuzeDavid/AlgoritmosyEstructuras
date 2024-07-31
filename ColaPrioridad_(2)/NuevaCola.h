typedef struct Nodo{
        Elem dato;
        struct Nodo *sig;
        }*ApNodo;

typedef struct CNodo{
        ApNodo *prim;
        ApNodo *ult;
        } CNodo;

typedef CNodo *Cola;
Cola nueva() {
    Cola t= (Cola)malloc(sizeof(CNodo));
    t->prim=t->ult=NULL;
    return t;
    }


int esnueva(Cola q){
    return q->prim==NULL && q->ult==NULL;}

Cola formar(Cola q, Elem e){
    ApNodo t=(ApNodo)malloc(sizeof(struct Nodo));
    t->dato=e; t->sig=NULL;
	if(esnueva(q))
		q->prim=q->ult=t;
	else{
		q->ult->sig=t;
		q->ult=t;
	}
        return q;
}
Elem primero(Cola q){ return q->prim->dato;}

Cola desformar(Cola q){
    if(q->prim==q->ult)
        return nueva();
    else
        q->prim=q->prim->sig;

        return q;
    }
