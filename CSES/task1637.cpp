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

vi dp;

vi digits(int u){

    vi d;

    string s = to_string(u);

    for(char i : s) d.pb(i - '0');

    return d;
}


int dfs(int u){


    if(u == 0) return 0;

    if(dp[u] != -1) return dp[u];

    int best = oo;

    for(int d : digits(u)){

        if(d == 0) continue;

        int nu = u - d;

        if(nu < 0) continue;

        int value = dfs(nu);

        best = min(best, value + 1);


    }

    return dp[u] = best;

}


void tc(){

    int n = 0;
    cin >> n;

    dp.assign(1e8, -1);

    int ans = dfs(n);

    cout << ans << "\n";
  

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
