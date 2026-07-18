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

vvi g;
vi r;
vi dp;

void dfs (int u, int p){

    if(g[u].size() == 1 && p != -1){

        r[u] = 1; dp[u] = 0; return;

    }

    int mx1 = 0, mx2 = 0;

    for(auto v : g[u]){

        if(v == p) continue;

        dfs(v, u);

        mx2 = max(mx2, dp[v] + 1);
        if(mx2 > mx1) swap(mx1, mx2);


    }

    r[u] = mx1 + mx2 + 1;

    dp[u] = mx1;

    return;

}


void tc(){

    int n = 0;
    cin >> n;

    g.assign(n, vi({}));


    for(int i = 0; i < n - 1; i++){

        int aux = 0;
        cin >> aux;

        g[aux - 1].pb(i + 1);
        g[i + 1].pb(aux - 1);

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
