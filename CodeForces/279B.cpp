#include<bits/stdc++.h>
using namespace std;

int main(){
int n, t, sorner = 0;
cin>>n>>t;
vector<int>a(n);
for(int i=0; i<n; i++){
cin>>a[i];
}//for

int ans = 0, sum=0;
for(int i=0, j=0; i<n; i++){
   while(j<n && sum +a[j]<= t){
    sum+=a[j];
    j++;
   }//while
   ans = max(ans, j-i);
   sum-=a[i];
}//for

cout<<ans<<"\n";


return 0;
}
