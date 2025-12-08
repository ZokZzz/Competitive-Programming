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


    ll n = 0;
    cin >> n;

    ll sum = ((n) * (n + 1)) / 2;

    if(sum % 2 != 0) {cout << "NO\n"; return 0;}

    ll mid = sum / 2, aux = 0;

    vector<ll> a(n), b, c;

    iota(all(a), 1);

    sort(rall(a));

    for(int i = 0; i < n; i++){

      if(aux + a[i] <= mid) {

        aux += a[i];

        b.pb(a[i]);

      } else c.pb(a[i]);

    }

    sort(all(b)); sort(all(c));

    cout << "YES\n";

    cout << b.size() << "\n";

    for(int i = 0; i < b.size(); i++) cout << b[i] << (i == b.size() - 1? "\n" : " ");

    cout << c.size() << "\n";

    for(int i = 0; i < c.size(); i++) cout << c[i] << (i == c.size() - 1? "\n" : " ");


    return 0;
}

