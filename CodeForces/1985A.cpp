#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
  string l, ll;
  cin>>l>>ll;
  char al = l[0], all = ll[0];
    l[0]=all;
    ll[0]=al;
    cout<<l<<" "<<ll<<"\n";
}
return 0;
}
