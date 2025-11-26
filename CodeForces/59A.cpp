#include<bits/stdc++.h>
using namespace std;
int main(){
string str = "";
cin>>str;
int may=0, mini=0;
for(int i=0; i<str.size(); i++){
if(str[i]<91){
    may++;
} else{
mini++;
}


}

if(mini>=may){
        for(int i = 0; i< str.size(); i++){


  str[i] = tolower(str[i]);
        }
  cout<<str<<"\n";
  return 0;
} else{
   for(int i = 0; i< str.size(); i++){


  str[i] = toupper(str[i]);
        }
  cout<<str<<"\n";
return 0;
}


return 0;
}
