#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0){
     ll n;
     vector<ll>a;
     cin>>n;
     for(int i=1; i<=17; i++){
        ll p = (pow(10, i));
        p++;
        if(n%p == 0){
            ll aux = (n/p);
            a.pb(aux);
        }//if
     }//for

    if(a.empty()){
        cout<<0<<"\n";
    }else{
    cout<<a.size()<<"\n";
    for(int i = a.size()-1; i >= 0; i--){
        cout<<a[i]<<(i==0? "\n" : " ");
    }//for


    }//if


    }//while


    return 0;
}


