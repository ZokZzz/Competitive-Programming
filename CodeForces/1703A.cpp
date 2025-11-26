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
transform(str.begin(), str.end(), str.begin(), ::tolower);
if(str=="yes"){
cout<<"YES"<<"\n";
}else{
cout<<"NO"<<"\n";
}
}//while

return 0;
}
