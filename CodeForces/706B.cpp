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

    vector<long long> shops (n);

    for(int i = 0; i < n; i++) cin >> shops[i];

    long long c = 0;
    cin >> c;

    vector<long long> coins (c);

    for(int i = 0; i < c; i++) cin >> coins[i];
O
    sort(all(shops));

    for(int i = 0; i < c; i++) cout << (upper_bound(all(shops), coins[i]) - shops.begin()) << "\n";

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

