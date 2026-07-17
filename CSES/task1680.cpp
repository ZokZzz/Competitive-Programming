#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1e6
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

vi memo(1e6, -1);

int target;



int longestPath(int u){

    if(u == target) return 0;

    if(memo[u] != -1) return memo[u];

    int best = INF;

    for(int v : g[u]){

        int value = longestPath(v);

        if(value == INF) continue;

        best = max(best, value + 1);


    }

    return memo[u] = best;


}

void make(int u, vi &ans){

    ans.pb(u);

    if(u == target) return;

    for(int v : g[u]){

        if(memo[v] == memo[u] - 1){

            make(v, ans);
            return;

        }


    }

}


void tc(){

    int n = 0, m = 0;
    cin >> n >> m;


    g.resize(n);

    target = n - 1;

    for(int i = 0; i < m; i++){

        int a = 0, b = 0;
        cin >> a >> b;
        a--; b--;

        g[a].pb(b);


    }


    int tam = longestPath(0);

    if(tam == INF){

        cout << "IMPOSSIBLE\n";
        return;


    }


    cout << tam + 1 << "\n";

    vi ans;

    make(0, ans);

    ans.pb(n - 1);

    for(int i = 0; i < ans.size(); i++) cout << ans[i] + 1 << " ";
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
