// Incluir en el main a "ArBin.h"

typedef ArBin ArBB;

ArBB InsOrdB(Elem e, ArBB a){
   if(esvacioB(a))
       return consB(e,vacioB(),vacioB());
   else if(EsMenor(e,raiz(a)))
            return consB(raiz(a),InsOrdB(e,izquierdoB(a)),derechoB(a));
        else
            return consB(raiz(a),izquierdoB(a),InsOrdB(e,derechoB(a)));
}

// EstaEn(e,a)==Cierto

ArBB Elimina(Elem e, ArBB a){
if(EsIgual(e,raiz(a)))
   if(EsHoja(a))
     return vacioB();
   else if(esvacioB(derechoB(a)))
         return izquierdoB(a);
        else if(esvacioB(izquierdoB(a)))
               return derechoB(a);
             else
               return consB(ElemMasDerechoB(izquierdoB(a)),
                                 Elimina(ElemMasDerechoB(izquierdoB(a)),izquierdoB(a)),
                                 derechoB(a));
else if(EsMenor(e,raiz(a)))
       return consB(raiz(a), Elimina(e,izquierdoB(a)),derechoB(a));
     else
       return consB(raiz(a),izquierdoB(a),Elimina(e,derechoB(a)));
}

