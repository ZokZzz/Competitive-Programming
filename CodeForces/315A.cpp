#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n;
cin>>n;
vector<ll>a(n), b(n);
for(int i=0; i<n; i++){
    ll x, y;
    cin>>x>>y;
    a[i]=x;
    b[i]=y;
}//for

ll ans = 0;



for(ll i=0; i<n; i++){
    for(ll j=0; j<n; j++){
        if(i==j){continue;}//if


       if(a[i] == b[j]){
          ans++;
          break;
       }//if

    }//for

}//for anidado

cout<<n-ans<<"\n";

return 0;
}
