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
#define memfull(x, y) memset(x, y, sizeof(x))

vvi adj;
vector<bool> vis;

void dfs (int s){

    if(vis[s]) return;

    vis[s] = 1;

    for (auto u : adj[s]) {

        dfs(u);

    }

}


void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    int c = 1;

    char grid[n][m];
    int mat[n][m];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            cin >> grid[i][j];

            if(grid[i][j] == '.'){

                mat[i][j] = c;
                c++;

            } else mat[i][j] = -1;


        }


    }

    adj.resize(c + 1);
    vis.resize(c + 1);

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){


            if(mat[i][j] != -1) {

                if(j - 1 >= 0 && mat[i][j - 1] != -1){

                adj[mat[i][j]].pb(mat[i][j - 1]);
                adj[mat[i][j - 1]].pb(mat[i][j]);
                }

                if(i - 1 >=  0 && mat[i - 1][j] != -1){

                adj[mat[i][j]].pb(mat[i - 1][j]);
                adj[mat[i - 1][j]].pb(mat[i][j]);
                }

                if(j + 1 < m && mat[i][j + 1] != -1){

                adj[mat[i][j]].pb(mat[i][j + 1]);
                adj[mat[i][j + 1]].pb(mat[i][j]);
                }

                if(i + 1 < n && mat[i + 1][j] != -1){

                adj[mat[i][j]].pb(mat[i + 1][j]);
                adj[mat[i + 1][j]].pb(mat[i][j]);
                }
            }

        }
    }

    int ans = 0;

    for(int i = 1; i < c; i++){


        if(!vis[i]){

            ans++;
            dfs(i);

        }

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
