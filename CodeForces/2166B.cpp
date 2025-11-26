#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t-->0){

       long long a = 0, b = 0, n = 0;
       cin >> a >> b >> n;

       if(n * b <= a || b == a) cout << 1 << "\n";
       else cout << 2 << "\n";


    }


    return 0;
}

