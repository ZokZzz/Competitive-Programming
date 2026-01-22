#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0;
        cin >> n;

        vector<pair<int, int>>a(n), b(n), c(n);


        for(int i = 0; i < n; i++){

            cin >> a[i].first;

            a[i].second = i;

        }

        for(int i = 0; i < n; i++){

            cin >> b[i].first;

            b[i].second = i;

        }

        for(int i = 0; i < n; i++){

            cin >> c[i].first;

            c[i].second = i;

        }

        sort(rall(a));

        sort(rall(b));

        sort(rall(c));


        long long ans = 0;

        for(int i = 0; i < min(n, 3); i++)

        for(int j = 0; j < min(n, 3); j++)

        for(int k = 0; k < min(n, 3); k++){

            if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){

                ans = max(ans, (ll) (a[i].first + b[j].first + c[k].first));

            }

        }


        cout << ans << "\n";



    }


    return 0;
}

