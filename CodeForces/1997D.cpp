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

const int inf = int(1e9); // ll inf = ll(1e18);

void read(vector<int> &x){
    for(auto &e:x) cin >> e;
}


int f(int no, vvi &childs, vi &x){
    if(sz(childs[no]) == 0){
        return x[no];
    }
    int mn = inf;
    for(auto e:childs[no]){
        mn = min(mn, f(e, childs, x));
    }
    if(no == 0){
        return x[no] + mn;
    }else{
        if(x[no] >= mn){
            return mn;
        }else{
            return (x[no] + mn) / 2;
        }
    }
}

void tc(){
    int n; cin >> n;
    vi x(n); read(x);
    vvi childs(n+1);
    for(int i = 1; i < n; ++i){
        int fat; cin >> fat;
        fat--;
        childs[fat].pb(i);
    }
    cout << f(0, childs, x) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        tc();
    }
}
