#include<bits/stdc++.h>
using namespace std;

struct nodo{
int valor;
nodo *izquierdo;
nodo *derecho;

 nodo(int val) {
    valor = val;
    izquierdo = derecho = nullptr;
    }
}; //struct nodo

nodo* insertar(nodo* raiz, int valor) {
    if (raiz == nullptr)
        return new nodo(valor);

    if (valor < raiz->valor)
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    else if (valor > raiz->valor)
        raiz->derecho = insertar(raiz->derecho, valor);

    return raiz;
}//insertar


void bfsTree(nodo* raiz) {
    if (!raiz) return;
    queue<nodo*> q;
    q.push(raiz);
    bool first = true;

    while (!q.empty()) {
        nodo* actual = q.front();
        q.pop();
        if (!first) cout << " ";
        cout << actual->valor;
        first = false;
        if (actual->izquierdo) q.push(actual->izquierdo);
        if (actual->derecho) q.push(actual->derecho);
    }
}//recorrido bfs para arboles



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
for(int k=1; k<=t; k++){
 nodo* raiz = nullptr;
 int n;
 cin>>n;
 for(int i=0; i<n; i++){int a; cin>>a; raiz = insertar(raiz,a);}//for

 cout<<"Case "<<k<<":\n";

 bfsTree(raiz);
 cout<<"\n\n";

}//while
return 0;
}
