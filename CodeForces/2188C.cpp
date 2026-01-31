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

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        vector<long long> b = a;

        sort(all(b));

        long long ans = 1e9;

        long long mn = *min_element(all(a)), mx = *max_element(all(a));

        for(int i = 0; i < n; i++){

                if(a[i] != b[i]){

                    ans = min(max(a[i] - mn, mx - a[i]), ans);

                }

        }

        if(a != b) cout << ans << "\n";
        else cout << -1 << "\n";




    }




    return 0;
}

