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

        long long n = 0, x = 0, y = 0;
        cin >> n >> x >> y;

        vector<long long> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        long long s = 0;

        for(int i = 0; i < n; i++) s += (a[i] / x) * y;

        long long ans = 0;

        for(int i = 0; i < n; i++){

            long long aux = (a[i] / x) * y;

            ans = max(ans, s - aux + a[i]);

        }


        cout << ans << "\n";



    }




    return 0;
}
