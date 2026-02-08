#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    const int mod = 1e9 + 7;


    int t = 0;
    cin >> t;

    while(t-- > 0){

        long long n = 0, k = 0;
        cin >> n >> k;

        long long ans = 1;

        for(int i = 0; i < k; i++){

            ans = (ans * n) % mod;

        }

        cout << ans << "\n";



    }




    return 0;
}

