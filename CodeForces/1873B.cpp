#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
int n, sum=1;
cin>>n;
vector<int>a(n, 0);
for(int i=0; i<n; i++){
cin>>a[i];
}//for

sort(a.begin(), a.end());

a[0]+=1;

for(int i=0; i<n; i++){
sum = sum * a[i];
}//for

cout<<sum<<"\n";


}//while
return 0;
}
