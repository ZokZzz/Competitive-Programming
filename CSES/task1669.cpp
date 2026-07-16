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


vvi g;
vb vis;

bool dfs(int u, int p){

    vis[u] = 1;

    for(int v : g[u]){

        if(v != p){

            if(!vis[v]){

                bool findCycle = dfs(v, u);

                if(findCycle) return true;


            } else {



                
            }


        }

    }

    return false;

}


void tc(){

    int n = 0, m = 0;
    cin >> n >> m;


    g.resize(n);
    vis.resize(n);

    for(int i = 0; i < m; i++){

        int a = 0, b = 0;
        cin >> a >> b;
        a--; b--;

        g[a].pb(b);
        g[b].pb(a);


    }

    if(m <= n - 1){

        cout << "IMPOSSIBLE\n";
        return;

    }

    bool ok = dfs(0, -1);

    if(ok) cout << "ES CYCLE PAPAAA\n";
    else cout << "GG\n";  







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
