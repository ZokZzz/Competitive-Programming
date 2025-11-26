#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"x: "<<x<<"\n"



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, c=1, ans=0;
cin>>n;
vector<pair<int, int>>time;
for(int i=0; i<n; i++){
    int x, y;
    cin>>x>>y;
    time.pb({x, y});
}//for

if(n==1){cout<<1<<"\n"; return 0;}//if

for(int i=1; i<n; i++){
   if(time[i]==time[i-1]){c++;}else{c=1;}//if
   ans = max(c,ans);
}//for


cout<<ans<<"\n";

return 0;
}
