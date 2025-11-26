#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
string str;
cin>>str;
if(str.size()%2 != 0){
    cout<<"NO\n";
    continue;
}//if
int mitad = str.size() / 2;
string uno = str.substr(0, mitad);
string dos = str.substr(mitad);

if(uno==dos){
 cout<<"YES\n";
}else{
 cout<<"NO\n";
}


}//while
return 0;
}

