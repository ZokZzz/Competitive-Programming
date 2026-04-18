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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0, k = 0;
        cin >> n >> k;

        vector<int> a (n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;

        for(int i = 0; i < n; i++) ans = max(ans, a[i] % k);

        cout << ans << "\n";


    }


    return 0;
}

