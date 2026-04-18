#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0, d = 0, m = 0;

    cin >> t >> d >> m;

    if(m == 0 && d >= t){
        cout << "Y\n";
        return 0;
    } else if (m == 0 && d < t) {
         cout << "N\n";
        return 0;
    }

    vector<int> a(m);

    for(int i = 0; i < m; i++) cin >> a[i];


    bool f = false;

    if(a[0] >= t) f = true;

    for(int i = 1; i < m; i++){

        if(a[i] - a[i - 1] >= t) f = true;

    }

    if(d - a[m - 1] >= t) f = true;


    if(f) cout << "Y\n";
    else cout << "N\n";


    return 0;
}
