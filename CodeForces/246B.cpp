#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, s=0;
cin>>n;
vector<ll>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
    s+=a[i];
}//for


if(s%n==0){
    cout<<n<<"\n";
}else{
    cout<<n-1<<"\n";
}

return 0;
}
