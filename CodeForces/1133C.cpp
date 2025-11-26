#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<long long int>a(n);
for(int i=0; i<n; i++){
cin>>a[i];
}//for

sort(a.begin(), a.end());

long long int ans = 1, sum=1,j = 1;
for(int i=0; i<n; i++){
   while(j<n && abs(a[i]-a[j])<= 5){
    sum++;
    j++;
   }//while
   //cout<<sum<<"\n";
   ans = max(ans, j - i);
   sum = 1;
}//for


cout<<ans<<"\n";


return 0;
}
