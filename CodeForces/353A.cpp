#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, paridad=0;
cin>>n;
pair<ll, ll>s;

for(int i=0; i<n; i++){
    ll x, y;
    cin>>x>>y;
    if((x+y)%2==(ll)0){paridad++;}//if
    s.first+=x;
    s.second+=y;
}//if


if(n==1 && s.first%2!=0 && s.second%2!=0){
    cout<<-1<<"\n";
}else if(s.first%2==0 && s.second%2==0){
    cout<<0<<"\n";
}else if(s.first%2!=0 && s.second%2!=0 && paridad == n){
    cout<<-1<<"\n";
}else if (s.first%2!=0 && s.second%2!=0){
    cout<<1<<"\n";
}else{
    cout<<-1<<"\n";
}


return 0;
}

