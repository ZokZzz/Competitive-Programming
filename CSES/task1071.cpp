#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        long long x = 0, y = 0;
        cin >> x >> y;

        if(y >= x){

          if(y % 2 == 0) cout << ((y-1) * (y-1)) + x << "\n";
          else cout << (y*y) - x + 1 << "\n";

        } else {

          if(x % 2 != 0) cout << ((x-1) * (x-1)) + y << "\n";
          else cout << (x*x) - y + 1 << "\n";

        }


    }//while

    return 0;
}


