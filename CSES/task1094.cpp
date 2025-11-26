#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>a(n, 0);

    for(int i=0; i<n; i++) cin>>a[i];

    ll s = 0;

    for(int i=1; i<n; i++){

       if(a[i] < a[i-1]){
         s += a[i-1] - a[i];
         a[i] = a[i-1];
       }//if

    }//for


    cout<<s<<"\n";

    return 0;
}
