#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<"#x: "<<x<<"\n"

int getSum(vector<int>&ps, int l, int r){
return (ps[r]-(l-1>=0? ps[l-1]:0));
}

int solve(vector<int> &a, vector<int> &ps, int l, int r){
int u=0;

u+=getSum(ps, 0, l);

u+=(r-l+1)-getSum(ps, l, r);

u+=getSum(ps, r, a.size()-1);

return u;

}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);

int n;
cin>>n;
vector<int>a(n), ps;
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

ps.push_back(a[0]);

for(int i=1; i<n; i++){
    ps.push_back(a[i]+ps[i-1]);
}//for

int s=0;

for(int i=0; i<n; i++){
    s+=a[i];
}//for

if(s==n){
     cout<<n-1<<"\n";
    return 0;
}//if

if(n==1 && a[0]==0){
    cout<<1<<"\n";
    return 0;
}//if


int ans=0;

for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        int curr = solve(a, ps, i, j);
        ans = max(ans, curr);

    }//for
}//for anidado

cout<<ans<<"\n";

return 0;
}
