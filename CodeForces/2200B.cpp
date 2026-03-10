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

    while(t-- > 0){

        int n = 0;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;

        vector<int> b = a;

        sort(all(b));

        for(int i = 0; i < n; i++) if(a[i] == b[i]) ans++;

        if(ans == n) cout << n << "\n";
        else cout << 1 << "\n";



    }




    return 0;
}

