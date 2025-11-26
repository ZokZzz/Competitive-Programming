#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
set<char>sorner;
vector<char>tasks;
int n;
cin>>n;
string str;
cin>>str;

for(int i=0; i<n; i++){
sorner.insert(str[i]);
}//for


for(int i=0; i<n; i++){
if(str[i]!=str[i+1]){
  tasks.push_back(str[i]);
}//if
}//for

sorner.size()==tasks.size()? cout<<"YES\n" : cout<<"NO\n";


}//while

return 0;
}
