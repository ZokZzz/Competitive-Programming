#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
int n, k;
bool flag = false;
cin>>n>>k;
vector<int>a(n);
for(int i=0; i<n; i++){
  cin>>a[i];
  if(a[i]==k){
    flag = true;
  }//if
}//for

if(flag){
    cout<<"YES\n";
}else{
 cout<<"NO\n";
}//if



 }//while




return 0;
}
