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

vector<int> parent;

void make_set(int v){

    parent[v] = v;

}


int find_set(int v){

        if(v == parent[v]) return v;

        return parent[v] = find_set(parent[v]);

}



void union_sets(int a, int b) {

    a = find_set(a);

    b = find_set(b);

    if(a != b){

        if(sz[a] < sz[b]) swap(a, b);

        parent[b] = a;

        sz[a] += sz[b];

    }
}









void tc(){

    int n = 0;
    cin >> n;

    parent.resize(n);

    vector<int> a(n + 1, -1), b(n + 1), d(n + 1);

    map<int, int> want;

    for(int i = 1; i <= n; i++){

        cin >> b[i];

        a[i] = i;

        want[i] = b[i];

        make_set(i);

    }

    for(int i = 1; i <= n; i++) cin >> d[i];

    for(int i = 1; i <= n; i++){

        if(a[i] - d[i] > 0) make_set();


        if(a[i] + d[i] <= n) make_set();



    }



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

