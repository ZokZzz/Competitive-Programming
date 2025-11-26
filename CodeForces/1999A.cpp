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
int sum=0;
for(int i=0; i<str.size(); i++){
sum+=(str[i]-'0');
}
cout<<sum<<"\n";
}//while
return 0;
}




