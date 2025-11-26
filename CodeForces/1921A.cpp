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
        vector<int>x, y;
        for(int i=0; i<4; i++){
            int a, b;
            cin>>a>>b;
            x.pb(a); y.pb(b);

        }//for

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        cout<<((x[3]-x[0])*(y[3]-y[0]))<<"\n";

    }//while


    return 0;
}

