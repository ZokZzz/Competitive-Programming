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

            long long  x = 0, ans = -1;
            cin >> x;


            for(int i = 0; i < 30; i++){

                for(int j = 0; j < 30; j++) {

                    long long y = (i << 1) | (1 << j);

                    if(y < x && x + y > (x ^ y) && y + (x ^ y) > x) ans = y;


                }



            }

            cout << ans << "\n";

    }


    return 0;
}

