#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1

bool can(long long mid, long long m){

    return mid <= (2 * m) / (mid + 1);

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;


    while(t-->0) {

        long long n = 0, m = 0, k = 0;
        cin >> n >> m >> k;

        long long d = (ll)((sqrtl(1.0L + 8.0L * m) - 1) / 2);

        long long l = min(d, k - 1);
        long long r = min(d, n - k);

        long long ans = 1 + l + r;

        ans = min(ans, m + 1);

        cout << ans << "\n";

    }




    return 0;
}



