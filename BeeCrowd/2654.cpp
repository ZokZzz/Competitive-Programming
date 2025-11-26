#include<bits/stdc++.h>
using namespace std;

struct god{
string nombre;
int nivel;
int kd;
int muertes;
};

bool ordenar(const god& a, const god& b) {
    if (a.nivel != b.nivel)
        return a.nivel > b.nivel;
    if (a.kd != b.kd)
        return a.kd  > b.kd ;
    if (a.muertes != b.muertes)
        return a.muertes < b.muertes;
    return a.nombre < b.nombre;
}



int main(){
int n;
cin>>n;
vector<god>a(n);
for(int i=0; i<n; i++){
 cin>>a[i].nombre;
 cin>>a[i].nivel;
 cin>>a[i].kd;
 cin>>a[i].muertes;
}//for

sort(a.begin(), a.end(), ordenar);

cout<<a[0].nombre<<"\n";



return 0;
}
