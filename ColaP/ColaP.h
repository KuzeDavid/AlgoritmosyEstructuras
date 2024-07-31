typedef struct Nodo
{
    Elem dato;
    Elem prior; 
    struct Nodo *sig;
} * ApNodo;
typedef struct
{
    ApNodo prim;
    ApNodo ult;
} CNodo;
typedef CNodo *Cola;


Cola nueva()
{
    Cola t = (Cola)malloc(sizeof(CNodo));
    t->prim = t->ult = NULL;
    return t;
}

int esNueva(Cola q)
{
    return q->prim == NULL && q->ult == NULL;
}

Cola formarP(Cola q, Elem e, Elem p)
{
    ApNodo t = (ApNodo)malloc(sizeof(struct Nodo));
    t->dato = e;
    t->prior = p;
    t->sig = NULL;
    if (esNueva(q))
    {
        q->prim = q->ult = t;
    }
    else
    {
        if (p > q->prim->prior)
        {
            t->sig = q->prim;
            q->prim = t;
        }
        else
        {
            q->ult->sig = t;
            q->ult = t;
        }
    }
}
Elem primero(Cola q){return q->prim->dato;}

Cola desformar(Cola q){
    if(q->prim==q->ult)return nueva();
    else
    {
        q->prim=q->prim->sig;
    }
    return q;
}
/*
void ImpCola(Cola q){
	Cola r=nueva();
	if(!esNueva(q)){
		ImpElem(primero(q));
		r->prim=q->prim;
		r->ult=q->ult;
		r=desformar(r);
		ImpCola(r);
	}	
	
}
*/

