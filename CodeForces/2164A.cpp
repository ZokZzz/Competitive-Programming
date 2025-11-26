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

        int n = 0;
        cin >> n;

        vector<long long> h (n);

        for(int i = 0; i < n;  i++) cin >> h[i];

        long long x = 0;
        cin >> x;

        long long a = *min_element(h.begin(), h.end()), b = *max_element(h.begin(), h.end());


        if(x >= a && x <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }


    }




    return 0;
}

