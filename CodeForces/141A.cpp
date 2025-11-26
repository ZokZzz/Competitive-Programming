#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string str1, str2, str3;
cin>>str1>>str2>>str3;
string s = str1+str2;
sort(s.begin(), s.end());
sort(str3.begin(), str3.end());
if(s==str3){
    cout<<"YES\n";
}else{
 cout<<"NO\n";
}

return 0;
}

