#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, m, d;
cin>>n>>m>>d;
vector<ll>a(n*m);
for(int i=0; i<n*m; i++){
    cin>>a[i];
}//for


sort(a.begin(), a.end());

ll ans=0, mid = (n*m)/2;

for(int i=0; i<n*m; i++){
    ll aux = abs(a[i]-a[mid]);
    if(aux%d!=0){
        cout<<-1<<"\n";
        return 0;
    }else{
        ans+=aux/d;
        }//if
}//for

cout<<ans<<"\n";


return 0;
}
