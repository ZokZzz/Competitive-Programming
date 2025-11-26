#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int tt;
cin>>tt;
while(tt--){
int n;
cin>>n;
int a[n], frec[n];
for(int i=0; i<n; i++){
   cin>>a[i];
}
for(int i=0; i<n; i++){
   frec[i]=0;
}

for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){
   if(a[i]==a[j]){
    frec[i]++;
   }
}
}


for(int i=0; i<n; i++){
   if(frec[i]==1){
    cout<<(i+1)<<"\n";
    break;
   }
}


}//while

return 0;
}
