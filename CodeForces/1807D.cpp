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

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0, q = 0;
        cin >> n >> q;

        vector<long long> a (n), ps;

        for(int i = 0; i < n; i++) cin >> a[i];


        long long s = accumulate(all(a), 0LL);

        ps.pb(a[0]);

        for(int i = 1; i < n; i++) ps.pb(a[i] + ps[i - 1]);

        for(int i = 0; i < q; i++){

            long long l = 0, r = 0, k = 0;
            cin >> l >> r >> k;

            long long qSum = ps[r - 1] - (l > 1 ? ps[l - 2] : 0);

            long long dis = (r - l + 1) * k;


            if( (s - dis + qSum) % 2 != 0){

                cout << "YES\n";

            } else {

                cout << "NO\n";

            }

        }


    }




    return 0;
}

