#include<bits/stdc++.h>
using namespace std;

struct nodo{
char valor;
nodo *izquierdo;
nodo *derecho;

 nodo(char val) {
    valor = val;
    izquierdo = derecho = nullptr;
    }
}; //struct nodo

nodo* insertar(nodo* raiz, char valor) {
    if (raiz == nullptr)
        return new nodo(valor);

    if (valor < raiz->valor)
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    else if (valor > raiz->valor)
        raiz->derecho = insertar(raiz->derecho, valor);

    return raiz;
}//insertar


// Recorrido **Preorden** (Root - Izq - Der) usando pila
void dfsPreordenIterativo(nodo* raiz) {
    if (!raiz) return;
    stack<nodo*> pila;
    pila.push(raiz);
    bool first = true;

    while (!pila.empty()) {
        nodo* actual = pila.top();
        pila.pop();
        if (!first) cout << " ";
        cout << actual->valor;
        first = false;
        if (actual->derecho) pila.push(actual->derecho);
        if (actual->izquierdo) pila.push(actual->izquierdo);
    }
}

// Recorrido **Inorden** (Izq - Root - Der) usando pila
void dfsInordenIterativo(nodo* raiz) {
    stack<nodo*> pila;
    nodo* actual = raiz;
    bool first = true;

    while (actual || !pila.empty()) {
        while (actual) {
            pila.push(actual);
            actual = actual->izquierdo;
        }

        actual = pila.top();
        pila.pop();
        if (!first) cout << " ";
        cout << actual->valor;
        first = false;

        actual = actual->derecho;
    }
}

// Recorrido **Postorden** (Izq - Der - Root) usando dos pilas
void dfsPostordenIterativo(nodo* raiz) {
    if (!raiz) return;
    stack<nodo*> pila1, pila2;
    pila1.push(raiz);

    while (!pila1.empty()) {
        nodo* actual = pila1.top();
        pila1.pop();
        pila2.push(actual);

        if (actual->izquierdo) pila1.push(actual->izquierdo);
        if (actual->derecho) pila1.push(actual->derecho);
    }
    bool first = true;
    while (!pila2.empty()) {
        if (!first) cout << " ";
        cout << pila2.top()->valor;
        first = false;
        pila2.pop();
    }
}


void buscarIterativo(nodo* raiz, char valor) {
    while (raiz != nullptr) {
        if (raiz->valor == valor){
            cout<<valor<<" existe\n";
            return;}
        else if (valor < raiz->valor)
            raiz = raiz->izquierdo;
        else
            raiz = raiz->derecho;
    }
    cout<<valor<<" nao existe\n";
}




int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
nodo* raiz = nullptr;
string ins;
while(getline(cin, ins)){
 if(ins == "INFIXA"){
   dfsInordenIterativo(raiz); cout<<"\n";
 } else if(ins == "PREFIXA"){
   dfsPreordenIterativo(raiz); cout<<"\n";
 }  else if(ins == "POSFIXA"){
   dfsPostordenIterativo(raiz); cout<<"\n";
 } else{
  char a = ins[0], b = ins[2];
  if(a=='I'){
    raiz = insertar(raiz, b);
  }//if

   if(a=='P'){
    buscarIterativo(raiz, b);
   }//if


 }//if

}//while

return 0;
}




