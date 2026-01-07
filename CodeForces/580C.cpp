#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1



int n = 0, m = 0, ans = 0;

vector<int> cats;

vector<vector<int>> adj;


void DFS(int u, int parent, int c) {

    if (cats[u] == 1) c++;
    else c = 0;

    if (c > m) return;

    bool isLeaf = true;

    for (int v : adj[u]) {
        if (v == parent) continue;
        isLeaf = false;
        DFS(v, u, c);
    }


    if (isLeaf) ans++;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    cats.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> cats[i];
    }

    adj.assign(n, vector<int>());

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    DFS(0, -1, 0);

    cout << ans << "\n";
    return 0;
}

