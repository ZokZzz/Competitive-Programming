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

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        if( (s.find("2026")) != string::npos ){

            cout << 0 << "\n";

        } else if (s.find("2025") != string::npos ) {

            cout << 1 << "\n";

        } else {

            cout << 0 << "\n";

        }





    }




    return 0;
}

