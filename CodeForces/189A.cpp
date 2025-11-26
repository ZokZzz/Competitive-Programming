#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, a, b ,c, s=0;
cin>>n>>a>>b>>c;

for(ll x=0; x<=4000;x++){
   for(ll y=0; y<=4000;y++){
  ll z = ((n-(x*a)-(y*b))/c);
  if(z>=0 && (a*x)+(y*b)+(z*c)==n){
    s = max(s, x+y+z);
  }//if
 }//y

}//x

cout<<s<<"\n";

return 0;
}
