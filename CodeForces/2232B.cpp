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

    long long n = 0;
    cin >> n;

    vector<long long> a(n), ans;
    for(int i = 0; i < n; i++) cin >> a[i];

    long long s = 0, m = LONG_MAX;

    for(int i = 0; i < n; i++){

        s += a[i];

        m = min(m, (s / (i + 1)));

        ans.pb(m);

    }

    for(int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1? "\n" : " ");

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t-->0){
        tc();
    }
}
