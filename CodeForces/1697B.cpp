#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, q;
cin>>n>>q;
vector<long long int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for

sort(a.rbegin(), a.rend());

vector<long long int>ps;

ps.push_back(a[0]);

for(int i=1; i<n; i++){
    ps.push_back(a[i]+ps[i-1]);

}//for

for(int i=0; i<q; i++){
  long long int x, y;
  cin>>x>>y;
  long long int l = x-y, r = x-1;
  cout<<ps[r]- (l>0? ps[l-1] : 0)<<"\n";
}//for


return 0;
}
