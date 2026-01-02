#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        long long n = 0, k = 0;
        cin >> n >> k;

        vector<long long> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        sort(all(a));

        vector<long long> b;

        long long good = 0;


        for(int i = 0; i < n - 1; i++){

           if( abs(a[i] - a[i+1]) <= k  ) {

                good ++;

           } else {

                b.pb(good + 1);
                good = 0;

           }



        }

        b.pb(good + 1);

        sort(all(b));

        long long ans = n - b[b.size() - 1];

        cout << ans << "\n";

    }




    return 0;
}

