#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n,m,k;
cin>>n>>m>>k;

vector<ll>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

vector<pair<pair<ll, ll>, ll>>operaciones;
for(int i=0; i<m; i++){
    ll l, r, d;
    cin>>l>>r>>d;
    operaciones.pb({{l, r}, d});
}//for


//calcular multiplicativo
vector<ll>ceros(100000, 0);
for(int i=0; i<k; i++){
  ll x, y;
  cin>>x>>y;
  ceros[x-1]++;
  ceros[y]--;
}//for
vector<ll>multipli;
multipli.pb(ceros[0]);
for(int i=1; i<ceros.size(); i++){
    multipli.pb(ceros[i]+multipli[i-1]);
}//for


//añadir multiplicativo a m
for(int i=0; i<operaciones.size(); i++){
    operaciones[i].second = operaciones[i].second * multipli[i];
}//for



//sumar operaciones totales
vector<ll>ceros2(100000, 0);

for(int i=0; i<operaciones.size(); i++){
  pair<ll, ll> aux = operaciones[i].first;
  ll aux2 = operaciones[i].second;
  ceros2[(aux.first)-1]+=aux2;
  ceros2[aux.second] += aux2*-1;
}//for

vector<ll>multipli2;
multipli2.pb(ceros2[0]);
for(int i=1; i<ceros2.size(); i++){
    multipli2.pb(ceros2[i]+multipli2[i-1]);
}//for



//sumar total y mostrar
for(int i=0; i<n; i++){
    a[i]+=multipli2[i];
    cout<<a[i]<<(i==n-1? "\n" : " ");
}//for

return 0;
}
