#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

ll dp[400005];

ll solve(int i, int end, vector<int> &x){
    if(i == end){
        return 0;
    }
    if(i == end-1){
        return 1e17;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    vector<int> range;
    range.push_back(x[i]);
    ll ans = 1e17;
    for(int j = i+1; j < (min(end, i+3)); ++j){
        range.push_back(x[j]);
        sort(range.begin(), range.end());
        int mid = range[int(range.size()) / 2];
        ll cost = 0;
        for(int h = 0; h < (int)range.size(); h++){
            cost += abs(range[h] - mid);
        }
        ans = min(ans, cost + solve(j+1, end, x));
    }
    return dp[i] = ans;
}

void tc(){
    int n; cin >> n;
    vector<int> x(2 * n);
    for(int i = 0; i < n; ++i){
        int y; cin >> y;
        x[i] = y;
        x[i + n] = y;
    }
    ll ans = 1e17;
    for(int i = 0; i <= 2*n; ++i){
        dp[i] = -1;
    }
    ans = min(ans, solve(0, n, x));
    for(int i = 0; i <= 2*n; ++i){
        dp[i] = -1;
    }
    ans = min(ans, solve(n-1, 2*n-1, x));
    for(int i = 0; i <= 2*n; ++i){
        dp[i] = -1;
    }
    ans = min(ans, solve(n-2, 2*n-2, x));
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        tc();
    }
}
