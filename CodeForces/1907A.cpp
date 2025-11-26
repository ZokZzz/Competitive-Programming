#include<bits/stdc++.h>
using namespace std;
int main(){
int tt;
cin>>tt;
while(tt--){
 string s;
 cin>>s;
 char c = s[0];
 int n = s[1]-'0';
  for(int i=1; i<=8; i++){
        if(i!=n){
    cout<<c<<i<<"\n";
        }//if
  }//for

   for(int i=97; i<=104; i++){
        char morcilla = i;
        if(morcilla!=c){
    cout<<morcilla<<n<<"\n";
        }//if
  }//for


}//while
return 0;
}
