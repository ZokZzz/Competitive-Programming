#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()

const long long m = 1000000007;

long long fastPow(long long a, long long b) {

    long long res = 1;

    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long n = 0;
    cin >> n;

   cout << fastPow(2, n) << "\n";


    return 0;
}


