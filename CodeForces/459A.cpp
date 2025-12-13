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

    long long x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cin >> x1 >> y1 >> x2 >> y2;


    if(x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)) {

        cout << - 1 << "\n";

    } else if(y1 == y2) {

      cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) << "\n";

    } else if(x1 == x2) {

        cout << x1  + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2  << "\n";


    } else {

        cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";


    }




    return 0;
}


