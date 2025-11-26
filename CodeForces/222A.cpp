#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, k;
    cin>>n>>k;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    int target = a[k-1];

    for(int i=k; i<n; i++){
        if(a[i] != target){
            cout<<-1<<"\n";
            return 0;
        }//if
    }//for

    int c = 0;

    for(int i=0; i<k; i++){
        if(a[i] != target){
            c = i+1;
        }//if
    }//for

    if(c>k){
        cout<<-1<<"\n";
    }else{
        cout<<c<<"\n";
    }



    return 0;
}

