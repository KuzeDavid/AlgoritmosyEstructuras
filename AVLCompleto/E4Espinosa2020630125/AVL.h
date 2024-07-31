typedef ArBB AVL;

int absoluto(int n){
    if(n>=0)
        return n;
    else
        return -n;
}

int FactBal(ArBB a){return altura(izquierdoB(a))-altura(derechoB(a));}

int EsAVL(ArBB a){
     return (esvacioB(a) || ((absoluto(FactBal(a))<=1)&&
                            (EsAVL(izquierdoB(a)))&&(EsAVL(derechoB(a)))));
}

AVL rotaDer(ArBB a){
    return consB(raiz(izquierdoB(a)),
           izquierdoB(izquierdoB(a)),
           consB(raiz(a),derechoB(izquierdoB(a)),derechoB(a)));
}

AVL rotaIzq(ArBB a){
    return consB(raiz(derechoB(a)),
           consB(raiz(a),izquierdoB(a),izquierdoB(derechoB(a))),
           derechoB(derechoB(a)));
}

AVL rotaDerIzq(ArBB a){ return rotaDer(consB(raiz(a),
                               rotaIzq(izquierdoB(a)),derechoB(a)));}

AVL rotaIzqDer(ArBB a){ return rotaIzq(consB(raiz(a),
                               izquierdoB(a),rotaDer(derechoB(a))));}

AVL HazAVL(ArBB a){
    if(absoluto(FactBal(a))>1)    // a no es AVL!!!
            if(EsAVL(izquierdoB(a)) && EsAVL(derechoB(a)))
                 if(FactBal(a)>1)
                      if(FactBal(izquierdoB(a))>0)
                           return rotaDer(a);
                      else
                           return rotaDerIzq(a);
                 else if(FactBal(derechoB(a))<0)
                            return rotaIzq(a);
                      else
                            return rotaIzqDer(a);
            else if(EsAVL(izquierdoB(a)))
                        return consB(raiz(a),izquierdoB(a),HazAVL(derechoB(a)));
                 else
                        return consB(raiz(a),HazAVL(izquierdoB(a)),derechoB(a));
    else if(EsAVL(izquierdoB(a)))
                        return consB(raiz(a),izquierdoB(a),HazAVL(derechoB(a)));
                 else
                        return consB(raiz(a),HazAVL(izquierdoB(a)),derechoB(a));
}

AVL InsAVL(Elem e, AVL a){
    a=InsOrdB(e,a);
    if(EsAVL(a))
        return a;
    else
        return HazAVL(a);
}

AVL EliminaAVL(Elem e, AVL a){
      a=Elimina(e,a);
      if(EsAVL(a))
        return a;
    else
        return HazAVL(a);
}

/*
AVL InsAVL(Elem e, AVL a){
   Va a insertar el elemento e en el AVL a (InsOrd(e,a)), y
   preserva la cualidad de AVL en el arbol resultado

}

*/


