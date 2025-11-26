#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, m, s = 0;
cin>>n>>m;
for(int i=1; i<=n; i++){
  if(i%m==0){n++;}//if
  s+=1;
}//for

cout<<s<<"\n";

return 0;
}
