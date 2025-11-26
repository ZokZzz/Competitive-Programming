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
if(str.size()==2){
    cout<<str<<"\n";
    continue;
}

string answer;

 for(int i=3; i<str.size(); i+=2){
answer.push_back(str[i]);
 }

 cout<<str[0]<<str[1]<<answer<<"\n";

}//while

return 0;
}
