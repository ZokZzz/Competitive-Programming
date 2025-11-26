#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin>>n>>m;
n=n-1;
bool f=true;
for(int i=0; i<=n; i++){
 if(i%2==0){
    for(int j=0;j<m; j++){
     cout<<"#";
    }
    cout<<"\n";
 }else if(i%2!=0 && f){
    for(int j=0; j<m; j++){
      if(j==(m-1)){
     cout<<"#";
      } else{
       cout<<".";
      }
    }
    cout<<"\n";
    f=false;
 } else{
 for(int j=0; j<m; j++){
      if(j==0){
     cout<<"#";
      } else{
       cout<<".";
      }
    }
    cout<<"\n";
    f=true;
 }//if


}//for

return 0;
}


