#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n ,c=1;
cin>>n;
int a[n];
vector<int>peaks;
for(int i=0; i<n; i++){
cin>>a[i];
}//for

for(int i=0; i<n-1; i++){
if(a[i]<=a[i+1]){
  c++;
}else{
peaks.push_back(c);
c=1;
}//if
}//for

peaks.push_back(c);

sort(peaks.rbegin(), peaks.rend());

cout<<peaks[0]<<"\n";


return 0;
}

