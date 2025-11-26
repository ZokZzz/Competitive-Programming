#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t-->0){

    ll n = 1, k = 1;
    cin>>n>>k;


    if(n % gcd(2, k) == 0){

      cout<<"YES\n";

    }else{

      cout<<"NO\n";

    }//if


    }//while

    return 0;
}

