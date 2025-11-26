#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n ,c=1;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
cin>>a[i];
}//for

vector<int>odd;
vector<int>even;


for(int i=0; i<n; i++){
if(a[i]%2==0){
 even.push_back(a[i]);
}else{
 odd.push_back(a[i]);
}//if
}//for

int target;

if(even.size()>odd.size()){
    target = odd[0];
}else{
  target = even[0];
}//if


for(int i=0; i<n; i++){
if(a[i]==target){
 cout<<(i+1)<<"\n";
 break;
}//if
continue;
}//for

return 0;
}


