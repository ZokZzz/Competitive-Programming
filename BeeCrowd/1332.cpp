#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
string s;
cin>>s;

if(s.size()==5){
    cout<<3<<"\n";
    continue;
}//if
bool f=false;
if((s[0]=='o' && s[1]=='n') ||  (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e')){f=true;}

if(f){
    cout<<1<<"\n";
}else{
   cout<<2<<"\n";
}


}//while

return 0;
}
