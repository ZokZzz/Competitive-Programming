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
    int n;
    cin>>n;
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }//for

     for(int i=0; i<n; i++){
        cin>>b[i];
    }//for

     int v=0;

     for(int i=0; i<n; i++){
        v+= max(a[i]-b[i], 0);
        }//for


   cout<<v+1<<"\n";

    }//while

    return 0;
}

