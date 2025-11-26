#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>horseshoes;
int a[4];
for(int i=0; i<4; i++){
  cin>>a[i];
}

for(int i=0; i<4; i++){
  horseshoes.insert(a[i]);
}

cout<<4-horseshoes.size()<<"\n";

return 0;
}
