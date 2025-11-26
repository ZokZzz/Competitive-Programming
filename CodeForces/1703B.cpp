#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
 set<char>sorner;
 int n=0;
 cin>>n;
  string str;
  cin>>str;
  for(int i=0; i<n; i++){
    sorner.insert(str[i]);
  }

  cout<<((sorner.size()*2)+(n-sorner.size()))<<"\n";


}//while

return 0;
}


