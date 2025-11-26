#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"



int main(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr);

int t;
cin>>t;
    while(t-->0){
    int n, k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0; i<n; i++){
    cin>>a[i];
    }

    sort(a.rbegin(), a.rend());

    int multi = 0, c=0;


    for(int i=0; i<n; i++){
        if((a[i]<<multi) <=k){
        c++;
        multi++;
        }
    }

    cout<<n-multi<<"\n";

    }//while

return 0;
}
