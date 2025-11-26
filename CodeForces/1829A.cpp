#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
char codeforces[] = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
int tt;
cin>>tt;
while(tt--){
int c=0;
string str;
cin>>str;
for(int i=0; i<str.size(); i++){
 if(str[i]!=codeforces[i]){
  c++;
 }
}//for

cout<<c<<"\n";

}//while
return 0;
}


