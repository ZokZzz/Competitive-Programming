#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string str;
cin>>str;
bool capital=true, allwordup=true, sorner=true;

if(str[0]<=90){
    capital = true;
}else{
   capital = false;
}//if

for(int i=0; i<str.size(); i++){
 if(str[i]>90){
  allwordup=false;
  break;
 }//if
}//for

for(int i=1; i<str.size(); i++){
 if(str[i]>90){
  sorner=false;
  break;
 }//if
}//for

if(capital==false && sorner==true){
 transform(str.begin(), str.end(), str.begin(), ::tolower);
 str[0]= (char)toupper(str[0]);
 cout<<str<<"\n";
 return 0;

}

if(capital==true && sorner==false){
 cout<<str<<"\n";
 return 0;
}


if(capital==true && sorner==true){
 transform(str.begin(), str.end(), str.begin(), ::tolower);
 cout<<str<<"\n";
 return 0;

}

 cout<<str<<"\n";
 return 0;


return 0;
}



