#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"

const ll limit = 1ll << 32;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
stack<ll>prioridad;
ll instrucciones, x=0;
cin>>instrucciones;
while(instrucciones--){
   string s;
   cin>>s;

     if(s == "add" && (!prioridad.empty())){
    x+=prioridad.top();
   }//if

   if(s == "add" && prioridad.empty()){
    x++;
   }//if


    if(s == "for" && (!prioridad.empty())){
    ll n;
    cin>>n;
    ll aux = n * prioridad.top();
    prioridad.push(min(aux, limit));
   }//if

    if(s == "for" && prioridad.empty()){
    ll n;
    cin>>n;
    prioridad.push(n);
   }//if



  if(s == "end"){
    prioridad.pop();
   }//if


}//while

if(x>=limit){cout<<"OVERFLOW!!!\n"; return 0;}

cout<<x<<"\n";

return 0;
}
