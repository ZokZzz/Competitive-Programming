#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1

ll mxval[200005];
ll mnval[200005];

void dfs(int no, int fat, vector<vector<int>> &ed, vector<long long> &val){
    mxval[no] = val[no];
    mnval[no] = val[no];
    if(fat != -1){
        mxval[no] = max(mxval[no], val[no] - mnval[fat]);
        mnval[no] = min(mnval[no], val[no] - mxval[fat]);
    }
    for(auto e:ed[no]){
        if(fat == e)continue;
        dfs(e, no, ed, val);
    }
}

void tc(){
    int n; cin >> n;
    vector<ll> x(n);
    for(auto &e:x){
        cin >> e;
    }
    vector<vector<int>> ed(n+1);
    for(int i = 0; i < n-1; ++i){
        int u, v; cin >> u >> v;
        u--;
        v--;
        ed[u].pb(v);
        ed[v].pb(u);
    }
    for(int i = 0; i <= n; ++i){
        mnval[i] = -1;
        mxval[i] = -1;
    }
    dfs(0, -1, ed, x);
    for(int i = 0; i < n; ++i){
        cout << mxval[i] << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        tc();
    }
}
