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

        int a = 0;
        cin >> a;

        if(360 % (180 - a) == 0) cout << "YES\n";
        else cout << "NO\n";


    }

    return 0;
}


