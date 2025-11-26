#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
 int a,b,c;
 cin>>a>>b>>c;
 if(a<b && b>c){
   cout<<"PEAK"<<"\n";
    continue;
  }else if(a<b && b<c){
  cout<<"STAIR"<<"\n";
    continue;
  }
else{
 cout<<"NONE"<<"\n";
    continue;
 }

}
return 0;
}
