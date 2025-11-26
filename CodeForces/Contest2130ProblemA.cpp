#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0){
       int n, s=0;
       cin>>n;
       vector<int>a(n);
       for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0){
        s+=1;
        }else{
        s+=a[i];
        }
       }


    cout<<s<<"\n";


    }//while
    return 0;
}
