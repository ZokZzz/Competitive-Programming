#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    srand(time(NULL));

    int tc;
    cin >> tc;

    while(tc--) {

        long long n, l, r;
        cin >> n >> l >> r;
        l--; r--;

        vector<long long> b(n), a;

        for(int i = 0; i < n; i++) b[i] = i + 1;

        b[r] = l;


        a.pb(b[0]);

        for(int i = 1; i < n; i++){

            a.pb(b[i] ^ b[i - 1]);

        }




        for (int i = 0; i < a.size(); i++) cout << a[i] << (i + 1 == a.size() ? "\n" : " ");
    }

    return 0;
}
