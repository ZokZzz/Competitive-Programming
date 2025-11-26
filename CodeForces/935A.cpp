#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int n, c=0;
cin>>n;
for(int i=1; i<=n; i++){
  if((n-i)%i==0){c++;}//if
}//for
cout<<c-1<<"\n";
return 0;
}
