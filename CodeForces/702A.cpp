#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
cin>>a[i];
}//for

int ans = 1, sum=1, i=0;
while(i<n-1){
  if(a[i]<a[i+1]){
    sum++;
  }else{
    sum=1;
  }//if
  ans = max(ans, sum);
  i++;
}//while

cout<<ans<<"\n";


return 0;
}

