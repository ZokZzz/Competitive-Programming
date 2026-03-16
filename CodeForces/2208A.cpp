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

        int a [n][n];

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++) cin >> a[i][j];

        }

        map<int, int> mp;



        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++) mp[a[i][j]]++;

        }


        vector<int> f;


        for(auto i : mp){

           f.pb(i.second);

        }

        int M = *max_element(all(f));


        if((n * n) - M >= n) cout << "YES\n";
        else cout << "NO\n";



    }





    return 0;
}
