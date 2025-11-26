#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
while(n--){
string str="";
cin>>str;
if((str[0]=='O' && str[str.size()-2]=='B') || (str[0]=='U' && str[str.size()-2]=='R')){
str[str.size()-1]='I';
}//if

cout<<str;

if(n!=0){
cout<<" ";
}//if

}//while
cout<<"\n";
return 0;
}
