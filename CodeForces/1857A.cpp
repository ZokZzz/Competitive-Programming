#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
  int n, sum=0;
  cin>>n;
  vector<int>a(n, 0);
  for(int i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
  }//for

  if(sum%2==0){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }//if

}//while


return 0;
}
