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

    while(t-->0){


        long long n = 0, a = 0, b = 0, c = 0;
        cin >> n >> a >> b >> c;

        vector<long long> f = {a, b, c}, d;

        long long t = 0, days = 0;

        while(t < n){

            t += f[days % 3];
            d.pb(t);
            days++;

            debug(t);


        }

        cout << days << "\n";


    }






    return 0;
}



