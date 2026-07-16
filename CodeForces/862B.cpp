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
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
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
#define sz(a) ((int)a.size())
#define memfull(x, y) memset(x, y, sizeof(x))

vvi adj;
vi color;

bool dfs (int u, int c){


    color[u] = c;

    for (auto v : adj[u]) {

        if(color[v] == -1){

            bool ok = dfs(v, 1 - c);

            if(!ok) return false;

        } else if (color[v] == c){

            return false;

        }

    }

    return true;

}

void tc(){

    int n = 0;
    cin >> n;

    adj.resize(n);
    color.assign(n, -1);

    for(int i = 0; i < n - 1; i++){

        int a = 0, b = 0;
        cin >> a >> b;
        a--; b--;

        adj[a].pb(b);
        adj[b].pb(a);


    }

    bool flag = true;

    for(int i = 0; i < n; i++){

        if(color[i] == -1) {

            bool ok = dfs(i, 0);

            if(!ok) flag = false;
            
        }

    }

    ll b = 0;

    for(auto i : color) if(i) b++;

    ll ans = (b * (color.size() - b) - (n - 1));

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
