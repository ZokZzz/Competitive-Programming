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

    long long n = 0, k = 0;
    cin >> n >> k;

    vector<long long> a (k, 0);

    for(int i = 0; i < n; i++){

        long long aux = 0;
        cin >> aux;

        a[aux % k]++;

    }

    long long ans = 0;

    for(int i = 1; i < (k + 1) / 2; i++) ans += min(a[k - i], a[i]);

    if(k % 2 == 0)  ans += a[k / 2] / 2;

    ans += a[0] / 2;

    cout << ans * 2 << "\n";

    return 0;
}


