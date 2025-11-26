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
vector<ll>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

ll q;
cin>>q;

vector<ll>b(q);

for(int i=0; i<q; i++){
    cin>>b[i];
}//for


vector<ll>s;

s.pb(a[0]);

for(int i=1; i<n; i++){
    s.pb(a[i]+s[i-1]);
}//for


for(int i=0; i<q; i++){
    ll index = lower_bound(s.begin(), s.end(), b[i])-s.begin();
    cout<<index+1<<"\n";
}//for



return 0;
}
