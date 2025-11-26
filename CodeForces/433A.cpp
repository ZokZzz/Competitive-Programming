#include<bits/stdc++.h>
using namespace  std;
int main(){
int n, s=0, c=0, d=0;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
cin>>a[i];
s+=a[i];
if(a[i]==100){
c++;
}else{
d++;
}
}

if((s/100)%2==0 && ((c%2==0 && d%2!=0 && (d>=1 && c>=1) ) || ((c==0 && d%2==0) || (d==0 && c%2==0)))){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}



return 0;
}
