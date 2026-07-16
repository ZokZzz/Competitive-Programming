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


void tc(){

    ll n = 0, c = 0;
    cin >> n >> c;

    vll a(n, 0);

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));
        
    for(int i = 0; i < n; i++) a[i] -= c;

    for(int i = 0; i < n / 2; i++) a[i] = max(a[i], 0LL);

    ll ans = accumulate(all(a), 0LL);

    cout << ans << "\n";


    
    
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
