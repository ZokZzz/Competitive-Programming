#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"

bool canBake(ll k, vector<ll> &a,  vector<ll> &b, ll n){
ll p = k;
for(int i=0; i<a.size(); i++){
   if(b[i]<a[i]*n){
    ll missing = (a[i]*n)-b[i];

   if(missing > p){return false;}//if

   p-=missing;

   }//if

}//for

return true;
}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, k;
cin>>n>>k;
vector<ll>a(n), b(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

for(int i=0; i<n; i++){
    cin>>b[i];
}//for


ll le=0, ri =1000000000;
while(ri-le>1){
 ll mi = (ri+le)/2;
  if(canBake(k, a, b, mi)){
    le = mi;
  }else{
    ri = mi;
  }//if
}//while

cout<<le<<"\n";


return 0;
}
