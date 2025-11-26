#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<3*n+i<<(i==n-1? "\n" : " ");
    }//for

    return 0;
}

