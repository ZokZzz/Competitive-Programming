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

    int n = 0;
    cin >> n;

    long long x = 0;
    cin >> x;

    vector<long long> a (n);

    for(int i = 0; i < n; i++) cin >> a[i];

    long long l = 0, r = 2e9;

    while(l < r) {


        long long mid = (l + r + 1) / 2;
        long long tot = 0;

        for(int i = 0; i < n; i++) {

           tot += max(mid - a[i], 0LL);
           if (tot > x) break;

        }

        if(tot <= x) l = mid ;
        else r = mid - 1;



    }


    cout << l << "\n";

    }


    return 0;
}

