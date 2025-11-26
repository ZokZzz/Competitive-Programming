#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  string s;
   for(int i=1; i<=12; i++){
    if(i==a || i==b){s+='a';}//if
     if(i==c || i==d){s+='b';}//if
   }//for
   if(s == "abab" || s == "baba"){
    cout<<"YES\n";
   }else{
   cout<<"NO\n";
   }//if
}//while
return 0;
}
