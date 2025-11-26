#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, k1, k2, k;
cin>>n>>k1>>k2;
k = k1+k2;
vector<ll>a(n), b(n);
priority_queue<ll>q;

for(int i=0; i<n; i++){
    cin>>a[i];
}//for

for(int i=0; i<n; i++){
    cin>>b[i];
}//for


for(int i=0; i<n; i++){
    ll aux = abs(a[i]-b[i]);
     if(aux>0){
    q.push(abs(a[i]-b[i]));
     }//if
}//for

while(k>0){
 if(q.empty()){break;}//if
 ll aux = q.top();
 q.pop();
 if(aux>1){
 q.push(aux-1);
 }//if
 k--;
}//while

ll ans=0;

if(k>0){

ans = (k%2 == 0 ? 0: 1);

cout<<ans<<"\n";

}else{

while(!q.empty()){
 ll aux = q.top();
 aux*=aux;
 ans+=aux;
 q.pop();
}//while

cout<<ans<<"\n";

}//if

return 0;
}
