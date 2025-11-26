#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n ,mx =0,suma = 0 ;
cin>>n;
map<int, int> frecuencia;
for(int i = 0;i < n; i++){
    int aux;
    cin>>aux;
    frecuencia[aux]++;
}

for(auto x: frecuencia){
    if(x.second > mx){
        mx = (x.second );
    }
    suma += (x.second );
}
suma -= mx;

if(mx <= suma || mx-1 == suma){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}
return 0;
}
