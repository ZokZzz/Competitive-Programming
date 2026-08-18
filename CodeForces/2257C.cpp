#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define oo 1e9
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vpii vector<pair<int, int>>
#define vvpii vector<vector<pair<int, int>>>
#define vvpll vector<vector<pair<long long, long long>>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define si set<int>
#define sll set<long long>
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


void tc(){

    int n = 0;
    cin >> n;

    vi parent(n + 1);

    parent[1] = 0;

    for(int v = 2; v <= n; v++) cin >> parent[v];

    int m = 0;
    cin >> m;

    vi d(m);

    vb isD(n + 1, false);

    for(int i = 0; i < m; i++){

        cin >> d[i];
        isD[d[i]] = true;

    }

    int k = m - 1;

    vb hd(n + 1);

    for(int v = 2; v <= n; v++){

        hd[v] = hd[parent[v]] || isD[parent[v]];

    }

    int no = -1;

    for(int v : d){

        if(!hd[v]){

            no = v;
            break;

        }

    }

    if(k == 0){

        cout << 0 << "\n";
        return;

    }

    cout << k << " ";

    for(int v : d) if(v != no) cout << v << " ";

    cout << "\n";


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t-->0){
        tc();
    }
}
