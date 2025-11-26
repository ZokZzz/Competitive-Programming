#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
 int t;
 cin>>t;
 while(t-->0){
    int n;
    cin>>n;
    if(n%4!=0){
         cout<<"NO\n";
         continue;
    }//if

    cout<<"YES\n";
    for(int i=1; i<=n/2; i++){
        cout<<(i*2)<<" ";
    }//for

      for(int i=1; i<n/2; i++){
        cout<<(i*2-1)<<" ";
    }//for

      cout<<(n+(n/2))-1<<"\n";

 }//while
return 0;
}
