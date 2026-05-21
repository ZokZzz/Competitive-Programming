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
#define sz(a) ((int)a.size())


void tc(){

    long long n = 0;
    cin >> n;

    vector<long long> a (n), f(n + 1, 0), d;

    for(int i = 0; i < n; i++){

        cin >> a[i];

        f[a[i]]++;

    }


    long long m = (*max_element(all(f))), pos = 0, ans = 0;

    for(int i = 1; i <= n; i++) if(f[i] == m) pos = i;

    for(int i = 0; i < n; i++){

        if(a[i] != pos){

            ans++;

        }

        if(a[i] == pos && ans > 0){

            if(i == n )

        }


    }



    cout << ans << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t-->0){
        tc();
    }
}

