#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
   long long int a, b;
    cin>>a>>b;
   long long int x = min(max(2*b,a), max(2*a, b));
   cout<<(x*x)<<"\n";
}//while
return 0;
}
