#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
n--;
vector<int>a(m,0);
set<int>sorner;
for(int i=0; i<m; i++){
   cin>>a[i];
}//for

sort(a.begin(), a.end());

for(int i=0; i<m-n; i++){
sorner.insert(a[i+n]-a[i]);
}//for

for(auto f : sorner){
  cout<<f<<"\n";
  break;
}//for

return 0;
}
