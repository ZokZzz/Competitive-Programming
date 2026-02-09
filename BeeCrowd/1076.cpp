#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int ans = 0;

vector< vector <int> > adj;

vector<bool> visited;

void dfs (int s){

    if(visited[s]) return;

    visited[s] = true;

    ans++;

    for (auto u : adj[s]) {

        dfs(u);

    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        ans = 0;

        int x = 0; // nodo de inicio
        cin >> x;

        int n = 0, m = 0;
        cin >> n >> m;

        adj.assign(n, vector<int>());
        visited.assign(n, false);

        for(int i = 0; i < m; i++){

            int a = 0, b = 0;
            cin >> a >> b;

            adj[a].pb(b);
            adj[b].pb(a);


        }

        dfs(x);

        cout << (ans * 2) - 2 << "\n";






    }




    return 0;
}

