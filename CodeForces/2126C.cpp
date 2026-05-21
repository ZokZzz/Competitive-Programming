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

    long long n = 0, k = 0, w = 0;
    cin >> n >> k;

    vector<long long> a(n), b;

    for(int i = 0; i < n; i++) cin >> a[i];

    long long valueBegin = a[k - 1], beg = 0;

    b = a;

    sort(all(b));

    for(int i = 0; i < n; i++) if(b[i] == valueBegin) beg = i;

    for(int i = beg; i < n - 1; i++){

        if( abs(b[i] - b[i + 1]) > b[i] - w){

            cout << "NO\n";
            return;
        }

        w += abs(b[i] - b[i + 1]);
    }

    cout << "YES\n";

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

