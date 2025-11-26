#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<" : "<<x<<"\n"



const ll mod = 1073741824;


vector<ll>multi



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);


ll a, b, c;
cin>>a>>b>>c;

  ll sum=0;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){

             sum = (sum + contarDivisores(i*j*k))%mod;

            }//for c


        }//for b


    }//for a


    cout<<sum<<"\n";


return 0;
}
