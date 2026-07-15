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


void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    char grid [n][m];

    int mat[n][m];

    memfull(mat, 0);

    map<int, pii> coor;

    int c = 0, source = -1, target = -1;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            
            cin >> grid[i][j];

            if(grid[i][j] == '#') {

                mat[i][j] = -1;

            } else if(grid[i][j] == '.'){

                mat[i][j] = c;
                coor[c] = {i + 1, j + 1};
                c++;

            } else if(grid[i][j] == 'A'){

                source = c;
                mat[i][j] = c;
                coor[c] = {i + 1, j + 1};
                c++;

            } else if(grid[i][j] == 'B'){

                target = c;
                mat[i][j] = c;
                coor[c] = {i + 1, j + 1};
                c++;

            }


        }

    }


    adj.resize(c);

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

    

    //bfs
    vi parent(c, -1);
    vi dis(c, -1);
    qi q;
    q.push(source);
    dis[source] = 0;

    while(!q.empty()){

        int u = q.front(); 
        q.pop();

        for(int v : adj[u]){

            if(dis[v] == -1){

                parent[v] = u;
                dis[v] = dis[u] + 1;
                q.push(v);

            }

        }

    }

    if(dis[target] == -1){

        cout << "NO\n";
        return;

    }

    vi path;

    int u = target;

    while(u != -1){

        path.pb(u);
        u = parent[u];

    }

    reverse(all(path));

    vector<pii> win;

    for(auto i : path){

        win.pb(coor[i]);

    }

    string ans;

    pii cur = win[0];

    for(int i = 1; i < win.size(); i++){

        if(win[i].second < cur.second) ans.pb('L');
        else if(win[i].second > cur.second) ans.pb('R');
        else if(win[i].first < cur.first) ans.pb('U');
        else if(win[i].first > cur.first) ans.pb('D');

        cur = win[i];
    }

    cout << "YES\n";

    cout << win.size() - 1 << "\n";

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
