#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
bool f=false;
string str;
cin>>str;

if(str=="abc"){
f=true;
}

if(str[1]=='c' && str[2]=='b'){
f=true;
}



if(str[0]=='b' && str[1]=='a'){
f=true;
}


if(str[0]=='c' && str[2]=='a'){
f=true;
}


if(f){
cout<<"YES\n";
}else{
cout<<"NO\n";
}

}//while
return 0;
}





