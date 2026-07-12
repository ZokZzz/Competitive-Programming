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
#define vvll vector<vector<long long>>
#define sti stack<int>
#define stll stack<long long>
#define stc stack<char>
#define sz(a) ((int)a.size())
#define fill(x, y) memset(x, y, sizeof(x))

vvi adj;

vector<bool> vis;
 
void dfs(int v, vi &c) {
    vis[v] = 1;
    c.push_back(v);
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u, c);
    }
}
 

void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    adj.resize(n);
    vis.resize(n);

    for(int i = 0; i < m; i++){

        int a = 0, b = 0;
        cin >> a >> b;
        a--; b--;
        adj[a].pb(b);
        adj[b].pb(a);

    }

    vi idx;

    for(int i = 0; i < n; i++){

        vi c;

        if(!vis[i]) {
            idx.pb(i);
            dfs(i, c);
        }

    }

    vis.assign(n, false);

    int ans = 0;

    for(auto i : idx){

        vi c;

        int s = 0;

        bool f = true;

        dfs(i, c);

        for(auto j : c){

            s += adj[j].size();

            if(adj[j].size() != 2) f = false;

        }

        s /= 2;

        if(f && s == c.size()) ans++;

    }


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
