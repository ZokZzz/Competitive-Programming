#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n=0;
cin>>n;
while(n--){
string str;
int suma1=0, suma2=0;
cin>>str;
string sub1 = str.substr(0, 3);
string sub2 = str.substr(3, 3);
for(int i=0; i<3; i++){
  int c = sub1[i]-'o';
  suma1+=c;

}//for

for(int i=0; i<3; i++){
  int c = sub2[i]-'o';
  suma2+=c;
}//for

if(suma1==suma2){
 cout<<"YES\n";
} else{
 cout<<"NO\n";
}



}//while
return 0;
 }
