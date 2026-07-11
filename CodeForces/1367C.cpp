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
#define fill(x, y) memset(x, y, sizeof(x))


ll myceil(ll a, ll b){

    return ((a + b - 1) / b);

}

void tc(){

    long long n = 0, k = 0;
    cin >> n >> k;

    string s;
    cin >> s;

    if(n == k && count(all(s), '0') == n){

        cout << 1 << "\n";
        return;

    }

    vll idx, z;

    ll ans = 0;

    for(int i = 0; i < n; i++) if(s[i] == '1') idx.pb(i);

    if(idx.empty()){

        cout << (myceil(n, k + 1)) << "\n";
        return;

    }

    z.pb(idx[0] - 0);
    ans += myceil((z.back() - k) ,(k + 1));
    for(int i = 1; i < idx.size(); i++){
        z.pb(idx[i] - idx[i - 1] - 1);
        ans += myceil((z.back() - (k * 2)) , (k + 1));
    }
    z.pb(n - idx[idx.size() - 1] - 1);
    ans += myceil((z.back() - k) ,(k + 1));



    cout << ans << "\n";

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
