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

    while(t-->0) {

       int n = 0, a = 0;
       cin >> n >> a;

       vector<long long>h(n);

       for(int i = 0; i < n; i++) cin >> h[i];

       long long it =  lower_bound(h.begin(), h.end(), a) - h.begin();

       cout << it << "\n";

       cout << (h[it-1 > 0 ? it-1 : 0])  << "\n";


    }




    return 0;
}

