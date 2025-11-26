#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t-->0){

    int n = 1;
    cin>>n;

    ll minA = INT_MAX, minB = INT_MAX;

    vector<ll>a (n, 0), b(n, 0);

    for(int i=0; i<n; i++){
            cin>>a[i];
            minA = min(minA, a[i]);

    }//for

    for(int i=0; i<n; i++){
            cin>>b[i];
            minB = min(minB, b[i]);


    }//for


    ll moves = 0;


    for(int i=0; i<n; i++){

        moves += max(a[i]-minA, b[i]-minB);

    }//for


    cout<<moves<<"\n";

    }//while

    return 0;
}
