#include<bits/stdc++.h>
using namespace std;

int main(){

 int luckynumbers[14]={4,7,44,47,74,77,444,447, 474, 477, 744, 747, 774, 777};
 int n=0;
 bool f=false;
 cin>>n;
 for(int i=0; i<14; i++){
  if(n%luckynumbers[i]==0){
    f=true;
  }

 }

if(f){
        cout<<"YES\n";
}  else{
        cout<<"NO\n";
}

return 0;
}
