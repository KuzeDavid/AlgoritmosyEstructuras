#include <stdio.h>
#include <stdlib.h>

//Implementacion de lista
//LIFO = el Ultimo en Entrar es el Primero en Salir
typedef struct LNodo{
  Elem dato;
  struct LNodo *sig;
} *Lista;

//Crea una lista vacía
Lista vacia() {
  return NULL;
}


/*cons: construye, constructora (creo xd)
Recibe como alrgumentos un nuevo elemento que se quiere añadir a la lista
 y una lista existente "l"*/
 
Lista cons(Elem e, Lista l){
 		 /*Crea una lista temporal (auxiliar), con lo que ello conlleva:
  		dos casillas: dato y siguiente*/
Lista temp = (Lista)malloc(sizeof(struct LNodo));
  		//En dato "se guarda" el elemento que se dio como argumento
temp->dato = e;
 		 /*En siguiente "guarda" el apuntador a la lista que se dio como argumento
  		En otras palabras, "sig" apunta a la direccion en donde esta la lista "l"
 		 Entonces, el nueva lista (nodo) ahora es la cabeza
  		Y sig apunta al resto de la lista*/
temp->sig = l;
 		 //Se devuelve la lista con el elemento añadido al final (LIFO)
return temp;
}

/*Lista Tabla(int n, int m){
	int i=0;
	if(i<=n){
	e=(m*i);
	Lista temp = (Lista)malloc(sizeof(struct Nodo));
	temp->dato = e;
	temp->sig = l;
	i++;
	return temp;	
	
	} else {
		printf("Error: I excedio a n");
	}

}

Lista SonIguales(lista a,lista b){
	if((a!=NULL)&&(b!=NULL)){
		if(a->elem!=b->elem)
		return false;
		else 
			return(SonIguales(a->sig,b->sig));
	}
	if(a==b)
	return true;
	else 
	return false;
}
*/

int esvacia(Lista l){
  //Evalua si l es nulo, devulve veradadero o falso
  return l == NULL;
}
Elem cabeza(Lista l){
//Devuelve el dato que está en la cabeza de la lista
  return l -> dato;
}
Lista resto (Lista l){
//Devueve los demas elementos de la lista
  return l -> sig;
}
/*
int NumElems(Lista l){
	if(esvacia(i))
		return 0;
	else
		return 1+NumElems(resto(l));
}*/

void ImpElems(Lista l){
	if(!esvacia(l)){
		ImpElem(cabeza(l));
		ImpElems(resto(l));
	}
};

Lista PegaListas(Lista l1, Lista l2){
	if(esvacia(l1))
		return l2;
	else
		return cons(cabeza(l1),PegaListas(resto(l1),l2));
};

Lista InvierteLista(Lista l){
	if(esvacia(l))
		return l;
	else
		return PegaListas(InvierteLista(resto(l)),cons(cabeza(l),vacia()));
}

Lista InsOrd(Elem e,Lista s){
	if(esvacia(s))
		return cons(e,s);
		else if(EsMenor(e,cabeza(s)))
		return cons(e,s);
}

Lista OrdListaAsc(Lista s){
	if(esvacia(s))
	 	return s;
	else
		return InsOrd(cabeza(s),OrdListaAsc(resto(s)));	 
}

Lista OrdListaDesc(Lista s){
	return InvierteLista(OrdListaAsc(s));
}

int EstaEn(Elem e,Lista l){
	fflush(stdin);
	if(esvacia(l))
		return 0;
	else if(EsIgual(e,cabeza(l)))
			return 1;
		else
			return EstaEn(e,resto(l));
}

Lista EliminaElem(Elem e,Lista l){
	if(EsIgual(e,cabeza(l)))
		return resto(l);
	else
		return cons(cabeza(l),EliminaElem(e,resto(l)));
}

Lista CopiasALista(ArBB a, Lista l){

  if(!esvacioB(a)){
          l = CopiasALista(izquierdoB(a),l);
          l = cons(raiz(a),l);
          l = PegaListas( CopiasALista(derechoB(a),l),l);
          return l;
  }else{
    return vacia();
  }
}


int ElimRepetidos(Elem e,Lista l){
	Elem d=resto(l);
	fflush(stdin);
	if(esvacia(l))
		return 0;
	else if(EsIgual(e,d))
			EliminaElem(e,l);
		else
			return ElimRepetidos(e,resto(l));
}
