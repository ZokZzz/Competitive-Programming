#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n;
cin>>n;
vector<int>index(n+1);
for(int i=1; i<=n; i++){
    cin>>index[i];
}//for

sort(index.begin(), index.end());


for(int i=1; i<=n; i++){
    if (index[i]==i){continue;}else{cout<<(index[i]-(index[i]-i))<<"\n"; return 0;}//if
}//for

cout<<n+1<<"\n";


return 0;
}
