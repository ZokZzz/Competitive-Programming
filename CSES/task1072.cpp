#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long n = 0;
    cin >> n;

    for(long long i = 1; i <= n; i++) {

        cout << (((i* i) * (((i* i) - 1 ))) / 2 ) - (i < 3? 0 : 4*(i-1)*(i-2)) << "\n";

    }


    return 0;
}

