#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, q;
cin>>n>>q;
vector<ll>a(n), b(q);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

sort(a.begin(), a.end());

for(int i=0; i<q; i++){
    cin>>b[i];
}//for

for(int i=0; i<q; i++){
    ll index = upper_bound(a.begin(), a.end(), b[i])-a.begin();
    cout<<index<<(i == q-1? "\n" : " ");
}//for



return 0;
}
