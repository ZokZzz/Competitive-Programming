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

vvpll ga, gb;


void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    ga.resize(n);
    gb.resize(n);

    vector<pair<ll, pll>> edg;

    for(int i = 0; i < m; i++){

        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        a--; b--;

        ga[a].pb({b, c});
        gb[b].pb({a, c});
        edg.pb({a, {b, c}});


    }

    //dijktra a

    pqpllm qa;

    vll disa(n, oo);

    qa.push({0, 0});

    disa[0] = 0;

    while(!qa.empty()){

        pll f = qa.top(); qa.pop();

        ll d = f.first;

        ll u = f.second;


        if(d != disa[u]) continue;
        
        for(pll e : ga[u]){

            ll v = e.first, cost = e.second;

            if(disa[v] > disa[u] + cost){

                disa[v] = disa[u] + cost;

                qa.push({disa[v], v});

            }

 
        }


    }



     //dijktra b

    pqpllm q;

    vll disb(n, oo);

    q.push({0, n - 1});

    disb[n - 1] = 0;

    while(!q.empty()){

        pll f = q.top(); q.pop();

        ll d = f.first;

        ll u = f.second;


        if(d != disb[u]) continue;
        
        for(pll e : gb[u]){

            ll v = e.first, cost = e.second;

            if(disb[v] > disb[u] + cost){

                disb[v] = disb[u] + cost;

                q.push({disb[v], v});

            }

 
        }


    }

    ll ans = oo;

    for(int i = 0; i < edg.size(); i++) ans = min(ans, disa[edg[i].first] + disb[edg[i].second.first] + (edg[i].second.second / 2));

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
