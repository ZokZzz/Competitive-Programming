#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;

    if (n == 0) {

        cout << 1 << "\n";
        return 0;

    }

    vector <int> a = {6, 8, 4, 2};

    cout << a [n % 4] << "\n";

    return 0;
}



