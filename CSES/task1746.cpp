#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define oo 1e9
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvpii vector<vector<pair<int, int>>>
#define vvpll vector<vector<pair<long long, long long>>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sti stack<int>
#define stll stack<long long>
#define stc stack<char>
#define mii map<int, int>
#define mll map<long long, long long>
#define qi queue<int>
#define qll queue<long long>
#define qc queue<char>
#define pqi priority_queue<int>
#define pqll priority_queue<long long>
#define pqpii priority_queue<pair<int, int>>
#define pqpll priority_queue<pair<long long, long long>>
#define pqim priority_queue<int, vector<int>, greater<int>>
#define pqllm priority_queue<long long, vector<long long>, greater<long long>>
#define pqpiim priority_queue<pii, vector<pii>, greater<pii>>
#define pqpllm priority_queue<pll, vector<pll>, greater<pll>>
#define sz(a) ((int)a.size())
#define memfull(x, y) memset(x, y, sizeof(x))


const int mod = 1e9 + 7;

vvll dp;
vll a;

ll n, m;

ll f (ll i, ll k){

    if(i == n) return 1;

    if(dp[i][k] != -1) return dp[i][k];

    if(a[i] != 0){

        if(abs(k - a[i]) > 1) return dp[i][k] = 0;

        return dp[i][k] = (f(i + 1, a[i])) % mod;


    } else { 



        ll o1 = f(i + 1, k), o2 = 0, o3 = 0;
        if (k - 1 >= 1) o2 = (f(i + 1, k - 1) ) % mod;
        if (k + 1 <= m) o3 = (f(i + 1, k + 1)) % mod;

        return dp[i][k] = (o1 + o2 + o3) % mod;


    }

}

void tc(){

    cin >> n >> m;

    a.assign(n, 0);

    for(int i = 0; i < n; i++) cin >> a[i];

    dp.assign(n + 1, vll (m + 1, -1));

    ll ans = 0;

    if(a[0] != 0) ans = f(1, a[0]);
    else {

        for(int i = 1; i <= m; i++) ans = (ans + f(1, i)) % mod;

    }

    
    cout << ans % mod << "\n";

    
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

 
 
 
