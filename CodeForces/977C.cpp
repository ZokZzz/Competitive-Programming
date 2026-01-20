#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, k = 0;
    cin >> n >> k;

    vector<long long> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    long long target = a[k - 1], MIN = 1000000000;

    long long c = 0;

    for(int i = 0; i < n; i++){

            if(target >= a[i]) c++;
            else break;

    }

    if(k == 0){

       cout << (a[0] == 1 ? -1 : 1) << "\n";

    } else if(c <= k){

        cout << min(MIN, target) << "\n";

    } else {

        cout << -1 << "\n";

    }



    return 0;
}

