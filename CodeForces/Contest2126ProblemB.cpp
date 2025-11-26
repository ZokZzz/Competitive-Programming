#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
int t;
cin>>t;
while(t-->0){
 ll n, k, c=0, ans=0;
 cin>>n>>k;
 vector<ll>a(n);
 for(int i=0; i<n; i++){
    cin>>a[i];
 }//for

  for(int i=0; i<n; i++){

    if(a[i]==0){
        c++;
    }//if

     if(c==k){
        c=0;
        ans++;
        i++;
     }//if

       if(a[i]==1){
        c=0;
       }//if



 }//for

    cout<<ans<<"\n";

}//while

return 0;
}
