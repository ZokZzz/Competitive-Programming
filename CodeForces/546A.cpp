#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main(){
int k, n, w;
int total=0;
cin>>k>>n>>w;
for(int i=1; i<=w; i++){

total+=k*i;
}

if(total<=n){
 cout<<0<<"\n";
} else{
cout<<(total-n)<<"\n";
}

return 0;
}
