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

        int n = 0;
        cin >> n;
        vector<long long> a(n + 1);

        for(int i = 1; i <= n; i++) cin >> a[i];

        vector<long long> rest;

        for(int i = 1; i <= n; i++) rest.pb(a[i] - i);

        map<long long, long long> cont;


        for(auto i : rest){

            cont[i]++;

        }

        long long ans = 0;

        for(auto i : cont){

            if(i.second > 1) ans += ( ( i.second * (i.second - 1) ) / 2 );

        }

        cout << ans << "\n";



    }




    return 0;
}

