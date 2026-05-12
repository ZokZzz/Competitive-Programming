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


void tc(){

    long long n = 0;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    long long M = 0, pos = 0, ans = 0;

    for(int i = 0; i < n; i++) if(a[i] > M) M = a[i];

    for(int i = 0; i < n; i++) if(a[i] == M) pos = i;

    swap(a[0], a[pos]);

    long long m = 0;

    for(int i = 0; i < n; i++){

        m = max(m, a[i]);
        ans += m;

    }


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

