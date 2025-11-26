#include<bits/stdc++.h>
using namespace std;
int main(){
double n=0, x=0, y=0;
cin>>n;
while(n--){
 cin>>x>>y;
 if(y==0){
    cout<<"divisao impossivel\n";
    continue;
 }
 double z=x/y;
 cout<<fixed<<setprecision(1)<<z<<"\n";
}
return 0;
}
