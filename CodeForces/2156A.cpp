#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t-->0){

        long long n = 0, ans = 0;
        cin >> n;

        while(n >= 3){

         long long res = n/3;

         ans += res;

         n = res + (n % 3);


        }//while

        cout << ans << "\n";

    }//while




    return 0;
}

