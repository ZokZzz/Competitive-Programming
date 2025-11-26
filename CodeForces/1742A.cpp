#include<bits/stdc++.h>
using namespace std;
int main(){
int testcases;
cin>>testcases;
while(testcases--){
 int a, b, c;
 cin>>a>>b>>c;
 bool f=false;
 if(a == b+c){
 f=true;
 }

 if(b == a+c){
 f=true;
 }

  if(c == b+a){
 f=true;
 }

 if(f){
 cout<<"YES\n";
 } else{
  cout<<"NO\n";
 }



}
return 0;
}
