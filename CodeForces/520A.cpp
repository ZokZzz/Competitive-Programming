#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
string str;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
set<char>alfabeto;
for(int i=0; i<n; i++){
alfabeto.insert(str[i]);
}

if(alfabeto.size()==26){
    cout<<"YES\n";
} else{
  cout<<"NO\n";
}

return 0;
}
