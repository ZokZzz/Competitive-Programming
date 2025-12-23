#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()



bool can(long long p, long long pillows, long long beds){

    long long remaining = (pillows - p) / (beds - 1);

    if((pillows - p) % (beds - 1) != 0) remaining ++;

    if(p - remaining < 2) return true;

    return false;



}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long n = 0, m = 0, k = 0;
    cin >> n >> m >> k;

    if(n == m) {

        cout << 1 << "\n";
        return 0;

    }

    if(n == 1) {

        cout << m << "\n";
        return 0;

    }


    long long l = 1, r = m;

    while(r - l > 1){

        long long mid = (l + r) / 2;

        if(can(mid, m, n)) l = mid;
        else r = mid;


    }

    cout << l << "\n";


    return 0;
}

