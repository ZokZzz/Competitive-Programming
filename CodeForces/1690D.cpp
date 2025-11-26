#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int tt;
cin>>tt;
while(tt--){

int n, k, sorner = 0;
cin>>n>>k;
string s;
cin>>s;
vector<int>a;

for(int i=0; i<s.size(); i++){
    if(s[i]=='B'){
     a.push_back(1);
    }else{
     a.push_back(0);
    }
}//for

int ans = INT_MAX, sum=0;
for(int i=0, j=0; i<n; i++){
   while(j<n && j-i<=k-1){
    sum+=a[j];
    j++;
   }//while
   int aux = k-sum;
   ans = min(ans, aux);
   sum-=a[i];
}//for

cout<<ans<<"\n";


}//while
return 0;
}


