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

        vector<long long> a (n);

        const long long nM = n - 1;

        for(int i = 0; i < n; i++) cin >> a[i];

        unordered_set<long long> s, d;

        for(int i = 0; i < n; i++){

            s.insert(nM / a[i]);
            d.insert(1 / a[i]);

        }

        long long ans = 0;

        for(int i = 0; i < n; i++){

            if(s.count(a[i]) && d.count(a[i])) ans++;

        }


        cout << ans << "\n";



    }




    return 0;
}

