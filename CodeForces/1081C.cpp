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


const long long mod  = 998244353;

vector<long long> f(3006, -1);

long long inv(long long a) {

  return a <= 1 ? a : mod - (long long)(mod/a) * inv(mod % a) % mod;

}

long long mulMod(long long a, long long b){

    return (a * b) % mod;

}


long long divMod(long long a, long long b){

    return (a * inv(b)) % mod;

}



void pre(){


    f[0] = 1;

    for(long long i = 1; i <= 3006; i++){

        f[i] = (i * f[i - 1]) % mod;

    }



}

long long fastPow(long long a, long long b) {

    long long res = 1;

    while (b > 0) {
        if (b & 1) res = (res * a) % mod; // si se necesita modulo % mod
        a = (a * a) % mod; // si se necesita modulo % mod
        b >>= 1;
    }

    return res;
}



void tc(){

    long long n = 0, m = 0, k = 0;
    cin >> n >> m >> k;


    long long ans = (divMod(f[n - 1], mulMod(f[k], f[n - k -1]))  * (mulMod(m, fastPow(m - 1, k)))) % mod;

    cout << ans << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    pre();
    while(t-->0){
        tc();
    }
}


