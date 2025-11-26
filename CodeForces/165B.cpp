#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


bool can(ll n, ll k, ll v){
  ll po = k;
  ll r = v;

while(true){
  if(((ll)v/k) == ((ll)0)){break;}//if

    r+=v/k;

    k*=po;

}//while


return r<n;
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, k;
cin>>n>>k;

ll l = 0, r = INT_MAX;
while(r-l>1){
    ll mid = (l+r)/2;
    if(can(n, k, mid)){
        l = mid;
    }else{
      r = mid;
    }//if

}//while

cout<<r<<"\n";

return 0;
}
