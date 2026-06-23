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


void tc(){

    long long a, b, x;
    cin >> a >> b >> x;

    long long ans = LONG_MAX;

    if(x > a && x > b) ans = 2;

    if(a == b) ans = 0;

    long long y = 0;

    while(a != b){


        if(b > a) swap(a, b);

        ans = min(ans, abs(a - b) + y);
        a /= x;
        y++;

    }

    ans = min(ans, y);

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

