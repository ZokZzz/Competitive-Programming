#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t-->0){
int n;
cin>>n;
vector<int>a(n, 0);
for(int i=0; i<n; i++){
    cin>>a[i];
}//for
    sort(a.begin(), a.end());
    bool f=true;

    for(int i=0; i<n-1; i++){
       if((a[i+1]-a[i])>1){
       f=false;
       }//if
    }//for


    if(f){
        cout<<"YES\n";
    }else{
    cout<<"NO\n";
    }//if


}//while
return 0;
}
