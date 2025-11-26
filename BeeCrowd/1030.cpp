#include<bits/stdc++.h>
using namespace std;
int main(){
int nc=0, n=0, k=0, in=1;
cin>>nc;
while(nc--){
cin>>n>>k;
int x=0;
for(int i=2; i<=n; i++){
 x=((x+k)%i);
}
cout<<"Case "<<in<<": "<<(x+1)<<"\n";
in++;
}
return 0;
}
