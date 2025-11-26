#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, k;
    cin>>n>>k;

    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<pair<ll, ll>>sorner;

   ll sum=0;
    for(int i=0, j=0; i<n-k+1; i++){
   while(j<n && j-i+1<=k){
    sum+=a[j];
    j++;
   }//while
   sorner.push_back({sum, i+1});
   sum-=a[i];
    }//for

    sort(sorner.begin(), sorner.end());

    cout<<sorner[0].second<<"\n";

    return 0;
}
