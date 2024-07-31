typedef struct Nodo{
      Elem r;
      struct Nodo *i;
      struct Nodo *d;
} *ArBin;

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

void fInOrder(FILE *salida, ArBin a){
   if(!esvacioB(a)){
        fInOrder(salida,izquierdoB(a));
        fImpElem(salida,raiz(a));
        fInOrder(salida,derechoB(a));
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

int mayor(int n1, int n2){
    if(n1>=n2)
        return n1;
    else
        return n2;
    }

int altura(ArBin a){
    if(esvacioB(a))
         return 0;
    else
         return 1+mayor(altura(izquierdoB(a)),altura(derechoB(a)));
}

int EsHoja(ArBin a){ return ((esvacioB(izquierdoB(a)))&&(esvacioB(derechoB(a)))); }

int EsInterno(ArBin a){ return !EsHoja(a);}

Elem ElemMasDerechoB(ArBin a){
     if(EsHoja(a)||esvacioB(derechoB(a)))
          return raiz(a);
     else
          return ElemMasDerechoB(derechoB(a));
}

Elem ElemMasIzquierdoB(ArBin a){
     if(EsHoja(a)||esvacioB(izquierdoB(a)))
          return raiz(a);
    else
          return ElemMasIzquierdoB(izquierdoB(a));
}

void ImpNivelAB(ArBin a, int nivel){
    if (esvacioB(a))
        return;
    if (nivel == 1)
        ImpElem(raiz(a));
    else if (nivel > 1){
        ImpNivelAB(izquierdoB(a), nivel-1);
        ImpNivelAB(derechoB(a), nivel-1);
    }
}
void ImpNivelPorNivelAB(ArBin a){
    int h = altura(a),i;
    for (i=1; i<=h; i++){
        ImpNivelAB(a, i);
        printf("\n");
    }
}



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
