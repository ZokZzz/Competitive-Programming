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


    long long n = 0, k = 0;
    cin >> n >> k;

    long long ans = k;

    vector <pair<pair<long long, long long>, long long>> a (n);

    for(int i = 0; i < n; i++){

        long long x, y, z;
        cin >> x >> y >> z;

        a[i] = {{x, y}, z};

    }


    sort(all(a));

    for(int i = 0; i < n; i++){

        if((k >= a[i].first.first && k <= a[i].first.second) && a[i].second >= k){

            k = a[i].second;
            ans = max(ans, k);

        }


    }

    cout << ans << "\n";



}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        tc();
    }
}

