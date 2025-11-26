#include<bits/stdc++.h>
using namespace std;

bool lucky(string str){
for(int i=0; i<str.size(); i++){
 if(str[i]!='4' && str[i]!='7'){
     return false;
 }
}
return true;
}


int main(){

string str;
cin>>str;
int c=0;
for(int i=0; i<str.size(); i++){
 if(str[i]!='4' && str[i]!='7'){
    continue;
 }
 c++;
}

string digito = to_string(c);

if(lucky(digito)==true){
cout<<"YES\n";
} else{
cout<<"NO\n";
}


return 0;

}

