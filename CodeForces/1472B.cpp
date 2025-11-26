#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
int n, u=0, d=0;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]==1){
        u++;
    }else{
    d++;
    }//if
}//for

if(((u%2==0 && u!=0) && d%2!=0) || (u==0 && d%2==0) || (u%2==0 && d==0) ||  (u%2==0 && d%2==0)){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}//if



}//while

return 0;
}
