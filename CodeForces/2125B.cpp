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

    long long a = 0, b = 0, k = 0;
    cin >> a >> b >> k;

    long long g = __gcd(a, b);

    if(k >= a / g && k >= b / g) cout << 1 << "\n";
    else cout << 2 << "\n";


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

