#include<bits/stdc++.h>
using namespace std;
int main(){
bool f=0;
string str;
cin>>str;
for(int i=0; i<str.size(); i++){
if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
 f=1;
}//if
}//for


if(f){
 cout<<"YES\n";
}else{
 cout<<"NO\n";
}//if




return 0;
}
