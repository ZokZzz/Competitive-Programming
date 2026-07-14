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
#define vvll vector<vector<long long>>
#define sti stack<int>
#define stll stack<long long>
#define stc stack<char>
#define mii map<int, int>
#define mll map<long long, long long>
#define sz(a) ((int)a.size())
#define memfull(x, y) memset(x, y, sizeof(x))


const ll mod = 1e9 + 7;

long long fastPow(long long a, long long b) {

    long long res = 1;

    while (b > 0) {
        if (b & 1) res = (res * a); // si se necesita modulo % mod
        a = (a * a); // si se necesita modulo % mod
        b >>= 1;
    }

    return res;
}



void tc(){

    ll n;
    cin >> n;

    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    




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
