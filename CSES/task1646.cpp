#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define sz(a) ((int)a.size())
#define full(x, y) memset(x, y, sizeof(x))


void tc(){

    long long n = 0, q = 0;
    cin >> n >> q;

    vector<long long> a(n), pref;
    for(int i = 0; i < n; i++) cin >> a[i];

    pref.pb(0);

    for(int i = 0; i < n; i++) pref.pb(a[i] + pref.back());

    for(int i = 0; i < q; i++){

        long long a = 0, b = 0;
        cin >> a >> b;

        cout << (pref[b] - pref[a - 1]) << "\n";

    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t-->0){
        tc();
    }
}

