#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
int a, b;
cin>>a>>b;
if(a>b){
  double aux = a-b;
  double sorner = aux/10;
  int s = ceil(sorner);
  cout<<s<<"\n";
}else{
  double aux = b-a;
  double sorner = aux/10;
  int s = ceil(sorner);
  cout<<s<<"\n";
}//if

}//while
return 0;
}
