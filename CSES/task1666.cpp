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
#define sz(a) ((int)a.size())
#define full(x, y) memset(x, y, sizeof(x))


vvi adj;
vector<bool> visited;
long long ans = 0;

void dfs (int s){

    if(visited[s]) return;

    visited[s] = true;

    for (auto u : adj[s]) {

        dfs(u);

    }

}


void tc(){

    long long n = 0, m = 0;
    cin >> n >> m;

    adj.assign(n, vi(0, 0));
    visited.resize(n);

    for(int i = 0; i < m; i++){

        long long a = 0, b = 0;
        cin >> a >> b;
        a--; b--;
        adj[a].pb(b);

    }

    long long c = 0;

    vector<long long> con;

    for(int i = 0; i < n; i++){

        if(visited[i] == false){

            c++;
            dfs(i);
            con.pb(i + 1);

        }


    }

    cout << c - 1 << "\n";

    for(int i = 1; i< con.size(); i++) cout << con[i] << " " << con[i-1] << "\n";

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

