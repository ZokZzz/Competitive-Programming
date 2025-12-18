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

    long long n = 0, k = 0;
    cin >> n >> k;

    long long x = 0, a = 0, b = 0, c = 0;
    cin >> x >> a >> b >> c;

    vector<long long> arr (n), o;

    arr[0] = x;

    for(int i = 1; i < n; i++) {

       arr[i] = ((a * (arr[i-1])) + b) % c;

    }

    long long r = 0;

    for(int i = 0, j = i; i < n - k + 1; i++) {

        while(j < n && j - i < k){

            r |= arr[j];
            j++;

        }

        o.pb(r);
        r = r | (arr[i] & arr[i + 1]);


    }

    long long ans = 0;

    for(auto i : o) ans ^= i;

    cout << ans << "\n";


    return 0;
}




