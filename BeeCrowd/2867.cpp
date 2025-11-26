#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
unsigned long long int n;
while(cin>>n){
for(int i=0; i<n; i++){
int a=0, b=0;
cin>>a>>b;
int c = (b*log10(a)+1);
cout<<c<<"\n";
}//for
}//while

return 0;
}
