#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
 int n, M=0, B=0;
 cin>>n;
 vector<int>a(n);
 for(int i=0; i<n; i++){
   cin>>a[i];
   if(a[i]%2==0){
    M+=a[i];
   }else{
    B+=a[i];
   }//if
 }//for

if( M>B){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}//if



}//while
return 0;
}
