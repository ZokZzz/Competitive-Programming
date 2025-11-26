#include <bits/stdc++.h>
using namespace std;
int main(){
string str1=" ", str2=" ";
cin>>str1>>str2;
string str3(str2.rbegin(), str2.rend());


if(str3==str1){
cout<<"YES\n";
}else{
cout<<"NO\n";
}




return 0;
}
