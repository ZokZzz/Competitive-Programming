#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
ll n, q;
cin>>n>>q;
vector<ll>a(n), ans(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

map<ll, ll> bag;
for(int x: a){
    bag[x]++;
}//for

for(int i=0; i<n; i++){
    ans[i] = bag.size();
    bag[a[i]]--;
    if(bag[a[i]]==0){bag.erase(a[i]);}//if
}//for

while(q-->0){
   ll aux;
    cin>>aux;
    cout<<ans[aux-1]<<"\n";
}//while

return 0;
}
