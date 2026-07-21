#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define oo 1e17
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvpii vector<vector<pair<int, int>>>
#define vvpll vector<vector<pair<long long, long long>>>
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
#define pqi priority_queue<int>
#define pqll priority_queue<long long>
#define pqpii priority_queue<pair<int, int>>
#define pqpll priority_queue<pair<long long, long long>>
#define pqim priority_queue<int, vector<int>, greater<int>>
#define pqllm priority_queue<long long, vector<long long>, greater<long long>>
#define pqpiim priority_queue<pii, vector<pii>, greater<pii>>
#define pqpllm priority_queue<pll, vector<pll>, greater<pll>>
#define sz(a) ((int)a.size())
#define memfull(x, y) memset(x, y, sizeof(x))

vvpll g;


void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    g.resize(n);

    for(int i = 0; i < m; i++){

        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        a--; b--;

        g[a].pb({b, c});

    }

    pqpllm q;

    vll dis(n, oo);

    q.push({0, 0});

    dis[0] = 0;

    while(!q.empty()){

        pll f = q.top(); q.pop();

        ll d = f.first;

        ll u = f.second;


        if(d != dis[u]) continue;
        
        for(pll e : g[u]){

            ll v = e.first, cost = e.second;

            if(dis[v] > dis[u] + cost){

                dis[v] = dis[u] + cost;

                q.push({dis[v], v});

            }

 
        }


    }

    for(int i = 0; i < n; i++) cout << dis[i] << " ";
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
