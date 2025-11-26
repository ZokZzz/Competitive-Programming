#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;

    vector<int> a (n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int m = 0;
    cin >> m;

    vector<int> b (m);

    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        if (abs(a[i] - b[j]) <= 1)
        {
            b[j] = 1000;
            ans++;
            break;
        }



    cout << ans << "\n";



    return 0;
}

