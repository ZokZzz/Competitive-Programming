#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
int x,y,z;
int t1=0, t2=0, t3=0;
while(n--){
cin>>x>>y>>z;
t1+=x; t2+=y; t3+=z;
}

if(t1==0 && t2==0 && t3==0){
 cout<<"YES\n";
}  else{
 cout<<"NO\n";
}

}
