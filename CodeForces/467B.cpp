#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;

    vector<int> army(m);

    for(int i = 0; i < m; i++) cin >> army[i];

    int fedor = 0, ans = 0;
    cin >> fedor;


    for(int i = 0; i < m; i++) {

        int dif = __builtin_popcount(fedor ^ army[i]);
        if (dif <= k) ans++;

    }


    cout << ans << "\n";



    return 0;
}

