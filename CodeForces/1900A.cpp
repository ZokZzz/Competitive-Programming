#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
int n, po=0, p=0;
cin>>n;
string s;
cin>>s;
bool f = false;
for(int i=0; i<n; i++){
  if(s[i]=='.'){
    po++;
    p++;
    if(po>=3){
        f=true;
    }//if

  }else{
  po = 0;
  }//if

}//for

if(f){
    cout<<2<<"\n";
}else{
    cout<<p<<"\n";
}

}//while
return 0;
}
