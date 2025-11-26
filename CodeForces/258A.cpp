#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
string s;
cin>>s;
vector<int>a;
for(char c: s){
 if(c=='1'){
    a.push_back(1);
 }else{
    a.push_back(0);
 }//if

}//for

int c = 0, index=0;

for(int i=0; i<a.size(); i++){
    if(a[i]==0){c++; index=i; break;}//if
}//for

if(c){
 a.erase(a.begin() + index);
}else{
 a.erase(a.begin());
}//if

for(int i=0; i<a.size(); i++){
   cout<<a[i];
}//for
cout<<"\n";


return 0;
}
