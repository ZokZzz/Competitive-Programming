#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
set<char>sorner;
int n=0;
string str;
cin>>n>>str;
bool f=true;
for(int i=0; i<n; i++){
sorner.insert(str[i]);
}//for
for(int i=0; i<n; i++){
  if(str[i]!='T' && str[i]!='i' && str[i]!='m' && str[i]!='u' && str[i]!='r'){f=false;}//if
}//for
if(f && str.size()==5 && sorner.size()==5){
cout<<"YES\n";
}else{
cout<<"NO\n";
}
}//while
return 0;
}
