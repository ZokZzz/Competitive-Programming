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

    while(t-- > 0){

        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;



        if( ( (2 * b) - c) % a == 0 && ((2 * b) - c) > 0){

            cout << "YES\n";

        } else if ((a + c) % 2 == 0 && ((a + c) / 2) > 0 && ((a + c) / 2) % b == 0 ) {

            cout << "YES\n";

        } else if ( ( (2 * b) - a) % c == 0 && ( (2 * b) - a) > 0 ){

            cout << "YES\n";

        } else {

            cout << "NO\n";

        }





    }




    return 0;
}


