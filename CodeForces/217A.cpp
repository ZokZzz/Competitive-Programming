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
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sti stack<int>
#define stll stack<long long>
#define stc stack<char>
#define mii map<int, int>
#define mll map<long long, long long>
#define sz(a) ((int)a.size())
#define memfull(x, y) memset(x, y, sizeof(x))

vvi adj;

vector<bool> vis;
 
void dfs(int v) {
    vis[v] = 1;
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u);
    }
}
 

void tc(){

    ll n;
    cin >> n;

    adj.resize(n);
    vis.resize(n);

    vector<pii> a(n);

    for(int i = 0; i < n; i++){

        int x = 0, y = 0;
        cin >> x >> y;
        a[i] = {x, y};

    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(i == j) continue;

            if(a[i].first == a[j].first || a[i].second == a[j].second){

                adj[i].pb(j);
                adj[j].pb(i);

            }

        }

    }

    
    int ans = 0;

    for(int i = 0; i < n; i++){

        if(!vis[i]){

            ans++;
            dfs(i);

        }

    }

    ans--;

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
