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

    while(t-->0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        s = "0" + s;

        int ans = 0;

        char cur = '0';

        for(int i = 1; i <= n; i++){

            char dig = s[i];

            if(cur != dig) {

                ans++;
                cur = dig;

            }


        }


        if(ans >= 3){

            cout << ans - 2 + n << "\n";

        } else if (ans == 2) {

            cout << ans - 1 + n << "\n";

        } else {

            cout << ans + n << "\n";

        }






    }




    return 0;
}

