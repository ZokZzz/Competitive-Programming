#include<bits/stdc++.h>
using namespace std;
 int main(){

 int testcases=0;
 cin>>testcases;

while(testcases--){

 int a[4];
 for(int i=0; i<4; i++){
cin>>a[i];
 }
 int b=a[0];
 int c=0;
  for(int i=0; i<4; i++){
if(b<a[i]){c++;}
 }

 cout<<c<<"\n";
}//while
 return 0;
 }
