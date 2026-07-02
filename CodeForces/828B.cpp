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

const int oo = 1e9;

void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    char grid[n][m];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++) cin >> grid[i][j];

    }

    int x1 = oo, x2 = 0, y1 = oo, y2 = 0, c = 0;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            if(grid[i][j] == 'B'){

                x1 = min(x1, j);
                x2 = max(x2, j);
                y1 = min(y1, i);
                y2 = max(y2, i);
                c++;
            }
        }

    }

    int dis1 = x2 - x1 + 1, dis2 = y2 - y1 + 1;

    if(c == 0){

        cout << 1 << "\n";
        return;

    }

    if(max(dis1, dis2) > n || max(dis1, dis2) > m){

        cout << -1 << "\n";
        return;

    }

    int ans = (max(dis1, dis2) * max(dis1, dis2)) - c;

    cout << ans << "\n";


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


