#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll t;
cin>>t;
while(t--){
ll x, y, n;
x=y=n=0;
cin>>x>>y>>n;
ll s=(n-n%x+y);
cout<<(s>n? s-x : s)<<"\n";
}//while

return 0;
}
