#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
int n=0, x=0;
cin>>n>>x;
if(n<=2){cout<<1<<"\n"; continue;}
cout<<(floor((n-3)/x)+2)<<"\n";
}//while
return 0;
}



