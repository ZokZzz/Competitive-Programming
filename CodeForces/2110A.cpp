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

    int n = 0;
    cin >> n;

    vector<int> a (n);

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    int ans = 0, fp = 0, fi = 0, lp = 0, li = 0;

    for(int i = 0; i < n; i++){

        if(a[i] % 2 == 0){

            fp = i + 1;
            break;

        }

    }

    for(int i = 0; i < n; i++){

        if(a[i] % 2 != 0){

            fi = i + 1;
            break;

        }

    }

    for(int i = 0; i < n; i++) if(a[i] % 2 == 0) lp = i + 1;

    for(int i = 0; i < n; i++) if(a[i] % 2 != 0) li = i + 1;

    ans = min(n - abs(lp - fp), n - abs(li - fi));

    cout << ans - 1 << "\n";

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

