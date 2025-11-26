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

    int n = 1, k = 1, sum = 0;
    cin>>n>>k;

    vector<ll>a (n, 0), b(n, 0);

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++) cin>>b[i];

    sort(a.begin(), a.end());

    sort(b.rbegin(), b.rend());

    for(int i=0; i<k; i++){

        if(b[i] > a[i]){
            a[i] = b[i];
        }//if

    }//for


    for(int i=0; i<n; i++){

     sum += a[i];

    }//for

    cout<<sum<<"\n";

    }//while

    return 0;
}

