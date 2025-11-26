#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

    long long r = 0, x = 0, d = 0, n = 0;
    cin >> r >> x >> d >> n;

    string rounds;
    cin >> rounds;

    long long ans = 0;

    for(int i = 0; i < n; i++){

        if(rounds[i] == '1'){

           if(d > r) r = 0;
           else r = r - d;

            ans++;

        } else if (r < x) {

           if(d > r) r = 0;
           else r = r - d;

            ans++;

        }//if


    }//for

    cout << ans << "\n";

    }//while

    return 0;
}

