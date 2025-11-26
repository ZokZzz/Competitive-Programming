#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
 int n;
 cin>>n;
 string s1, s2;
 cin>>s1>>s2;
 bool f = true;
 for(int i=0; i<n; i++){


    if(s1[i]==s2[i]){
        continue;
    }//if

     if(s1[i]=='G' && (s2[i]=='G' || s2[i]=='B')){
        continue;
    }else if(s1[i]=='B' && (s2[i]=='G' || s2[i]=='B')){
         continue;
       }else{ f=false;
        break;
        }//if


 }//for

 if(f){
    cout<<"YES\n";
 }else{
    cout<<"NO\n";
 }//if

 f = true;

}//while


return 0;
}
