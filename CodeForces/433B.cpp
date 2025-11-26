#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n;
cin>>n;
vector<ll>a(n), b(n);
for(int i=0; i<n; i++){
    cin>>a[i];
    b[i] = a[i];
}//for

sort(b.begin(), b.end());

vector<ll>suma, sumb;

suma.pb(a[0]);
sumb.pb(b[0]);


for(int i=1; i<a.size(); i++){
    suma.pb(a[i]+suma[i-1]);
    sumb.pb(b[i]+sumb[i-1]);
}//for

ll q;
cin>>q;

for(int i=0; i<q; i++){
  ll t, l, r;
  cin>>t>>l>>r;
  if(t == 1){
     cout<<suma[r-1] - (l>1? suma[l-2] : 0)<<"\n";
  }else{
     cout<<sumb[r-1] - (l>1? sumb[l-2] : 0)<<"\n";
}//if

}//for


return 0;
}

