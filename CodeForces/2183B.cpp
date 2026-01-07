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

    int t = 0;
    cin >> t;

    while(t-- > 0) {

        int n = 0, k = 0;
        cin >> n >> k;

        vector<int> a (n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int k1 = k - 1;

        set<int> sorner (a.begin(), a.end());

        int r = 0;

        while(sorner.count(r)) r++;


        cout << min(k1, r) << "\n";







    }




    return 0;
}




