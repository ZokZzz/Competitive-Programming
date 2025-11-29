#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, m = 0;
    cin >> n >> m;

    int lower;

    (n % 2 == 0 ? lower = n / 2 : lower = (n/2) + 1);

    for(int i = lower; i <= n; i++){

        if(i % m == 0) {

            cout << i << "\n";
            return 0;

        }

    }

    cout << -1 << "\n";

    return 0;
}

