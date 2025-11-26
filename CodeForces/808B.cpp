#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, k;
cin>>n>>k;

double div = n-k+1;

vector<ll>a(n), ps;

for(int i=0; i<n; i++){
    cin>>a[i];
}//for


double s=0;

for(int i=0; i<k; i++){
 s+=a[i];
}//for

double ms = s;

for(int i=k; i<n; i++){
 s+=a[i]-a[i-k];
 ms+=s;
}//for


double ans = ms/div;

cout<<fixed<<setprecision(8)<<ans<<"\n";


return 0;
}
