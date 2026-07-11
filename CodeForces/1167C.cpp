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
vi ans(1e6, 1);


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

    int n, m;
    cin >> n >> m;

    vis.resize(n);
    adj.resize(n);

    for(int i = 0; i < m; i++){

        int t = 0;
        cin >> t;
        

        if(!t) continue;

        int x = 0;
        cin >> x;
        x--;

        for(int j = 0; j < t - 1; j++){

                int aux = 0;
                cin >> aux;
                aux--;

                adj[x].pb(aux);
                adj[aux].pb(x);

              
        }

    }

    

    for(int i = 0; i < n; i++){

        vi c;

        if(!vis[i]) dfs(i, c);

        for(auto j : c){

            ans[j] = c.size();

        }

    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
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

