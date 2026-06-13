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

    int n = 0, k = 0;
    cin >> n >> k;
    string s;
    cin >> s;

    bool f = true;

    vector<bool> b(n);

    for(int i = 0; i < n; i++) if(s[i] == '1') b[i] = 1; else  b[i] = 0;

    for(int i = 0; i < n - k; i++){

        if(b[i] == 0) continue;

        if(b[i] == 1 && b[i + k] == 1){

            b[i] = 0;
            b[i + k] = 0;

        }

    }

    for(int i = 0; i < n; i++){

        if(b[i] == 1){

            f = false;
            break;

        }

    }

    if(f) cout << "YES\n";
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


