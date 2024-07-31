typedef struct Nodo{
      Elem r;
      struct Nodo *i;
      struct Nodo *d;
} *ArBin;

typedef ArBin *pNodo;

ArBin vacioB(){return NULL;}

ArBin consB(Elem r, ArBin i, ArBin d){
     ArBin temp =(ArBin)malloc(sizeof(struct Nodo));
     temp->r=r;
     temp->i=i;
     temp->d=d;
     return temp;
}

int esvacioB(ArBin a){return a==NULL;}

Elem raiz(ArBin a){return a->r;}

ArBin izquierdoB(ArBin a){return a->i;}

ArBin derechoB(ArBin a){return a->d;}

int NumElemsB(ArBin a){
    if(esvacioB(a))
        return 0;
    else
        return 1+NumElemsB(izquierdoB(a))+NumElemsB(derechoB(a));
};

void PreOrder(ArBin a){
   if(!esvacioB(a)){
        ImpElem(raiz(a));
        PreOrder(izquierdoB(a));
        PreOrder(derechoB(a));
   }
};

void InOrder(ArBin a){
   if(!esvacioB(a)){
        InOrder(izquierdoB(a));
        ImpElem(raiz(a));
        InOrder(derechoB(a));
   }
};

void PostOrder(ArBin a){
   if(!esvacioB(a)){
        PostOrder(izquierdoB(a));
        PostOrder(derechoB(a));
        ImpElem(raiz(a));
   }
};

int Estaen(ArBin a, int e) {
	
	if(a==NULL){
	return 0;
	}
	else if(a->r==e){
		return 1;
	} //else if (e<a->r){
		//return Estaen(a->i,e);
	//}else {
	//	return Estaen(a->d,e);
	//}
	
};

/*void DeterminarExistencia(ArBin a,int e){
	if(Estaen(a,e)){
		printf("El Valor si existe en el arbol");
	}else {
		printf("El valor no existe en el arbol");
	}
};


/*
Espec ArBin
   vacioB: -> ArBin;
   consB: Elem, ArBin, ArBin -> ArBin;
   esvacioB: ArBin -> Bool;
   raiz: ArBin -> Elem;
   izquierdoB: ArBin -> ArBin;
   derechoB: ArBin -> ArBin;
  Axioma: Elem r, ArBin i, d;
     [ab1] esvacioB(vacioB())= Verdadero;
     [ab2] esvacioB(consB(r,i,d))= Falso;
     [ab3] raiz(vacioB()) = Error;
     [ab4] raiz(consB(r,i,d)) = r;
     [ab5] izquierdoB(vacioB()) = Error;
     [ab6] izquierdoB(consB(r,i,d)) = i;
     [ab7] derechoB(vacioB()) = Error;
     [ab8] derechoB(consB(r,i,d)) = d;
   Fin ArBin.
 */
