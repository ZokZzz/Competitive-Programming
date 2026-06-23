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


bool can(vector<long long>& a, long long k){


    long long n = a.size();

    vector<long long> range(k + 1);

    for(int i = 0; i <= k; i++) range[i] = i;

    set<long long> r(all(range));





}




void tc(){

    long long n = 0, k = 0;
    cin >> n >> k;

    vector<long long> a(n); for(int i = 0; i < n; i++) cin >> a[i];

    if(can(a, k)) cout << "YES\n";
    else cout << "NO\n";

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

