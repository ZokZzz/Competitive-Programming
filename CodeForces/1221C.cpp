#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"

bool can(ll k, ll c, ll m, ll x){
 if(k > c || k> m) return false;
  c-=k;
  m-=k;
  return c+m+x >= k;
}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
ll c, m, x;
cin>>c>>m>>x;
ll le=0, ri =1e9;
while(ri-le>1){
 ll mi = (ri+le)/2;
  if(can(mi, c, m, x)){
    le = mi;
  }else{
    ri = mi;
  }//if

}//while

cout<<le<<"\n";

}//while

return 0;
}
