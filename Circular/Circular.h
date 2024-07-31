typedef struct Nodo{
      Elem dato;
      struct Nodo *sig;
} *Circular;


Circular nuevaC(){return NULL;}

int esvaciaC(Circular c){ return c==NULL;}

Circular formarC(Circular c, Elem e){
     Circular temp =(Circular)malloc(sizeof(struct Nodo));
     temp->dato=e;
     if(esvaciaC(c)){
         c=temp;
         c->sig=temp;
     }else{
          temp->sig=c->sig;
          c=c->sig=temp;
     }
     return c;
}

Elem primeroC(Circular c){return c->sig->dato;}

Circular rotacionC(Circular c){return c->sig;}

Circular desformarC(Circular c){
      Circular temp=c->sig;
      if(c==c->sig){
           free(temp);
           return nuevaC();
      }else{
           c->sig=c->sig->sig;
           free(temp);
           return c;
      }
}

