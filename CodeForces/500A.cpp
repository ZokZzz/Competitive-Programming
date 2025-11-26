#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, t = 0;
    cin >> n >> t;
    n--;
    t--;


    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int b = 0;

    for(int i = 0; i < n; i++) {


        if(b == t) {

            cout << "YES\n";
            return 0;

        }

        b += a[i];
        i += a[i] - 1;


    }


    if(b == t) cout << "YES\n";
    else cout << "NO\n";



    return 0;
}

