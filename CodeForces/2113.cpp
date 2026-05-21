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

    int n, m, k; cin >> n >> m >> k;
    vector<string> x(n);
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }
    vector<vector<int>> prefix(n, vector<int> (m, 0));
    for(int i = 0; i < m; ++i){
        if(i == 0){
            prefix[0][i] = (x[0][i] == 'g');
        }else{
            prefix[0][i] = prefix[0][i-1] + (x[0][i] == 'g');
        }
    }
    for(int i = 0; i < n; ++i){
        if(i == 0){
            prefix[i][0] = (x[i][0] == 'g');
        }else{
            prefix[i][0] = prefix[i-1][0] + (x[i][0] == 'g');
        }
    }
    for(int i = 1; i < n; ++i){
        for(int j = 1; j < m; ++j){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + (x[i][j] == 'g');
        }
    }
    int totgld = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            totgld += (x[i][j] == 'g');
        }
    }
    int mn = 1e9;
    int lim  = k - 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(x[i][j] == '.'){
                int a = i - lim, b = j - lim;
                int c = i + lim, d = j + lim;
                if(a < 0) a = 0;
                if(b < 0) b = 0;
                if(c >= n) c = n-1;
                if(d >= m) d = m-1;
                int ans = prefix[c][d];
                if(a > 0){
                    ans -= prefix[a-1][d];
                }
                if(b > 0){
                    ans -= prefix[c][b-1];
                }
                if(a > 0 && b > 0){
                    ans += prefix[a-1][b-1];
                }
                mn = min(mn, ans);
            }
        }
    }
    cout << totgld - mn << endl;


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

