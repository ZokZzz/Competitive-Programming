#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"

bool bit(int x, int b){
return (x>>b)&1;
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);

ll n, k;
cin>>n>>k;

vector<ll>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for


vector<ll>ab(n-1);
for(int i=0; i<n-1; i++){
    ab[i]=a[i+1];
}//for

ll s=0;

bool f = false;

for(int i=0; i<(1<<n); i++){
    for(int j=0; j<n-1; j++){

        if(bit(i, j)){ s+=ab[j];}else{s-=ab[j];}//if

    }//for

    if(s+a[0]==k){f = true; break;}//if
    s=0;

}//for

f == true? cout<<"YES\n" : cout<<"NO\n";


return 0;
}
