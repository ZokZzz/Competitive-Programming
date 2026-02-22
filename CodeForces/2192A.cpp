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

    while(t -- > 0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

       int ans = 1;

       for(int i = 1; i < n; i++){

            if(s[i - 1] != s[i]) ans++;

       }

       if(ans != n && s[0] != s[n - 1]) ans++;

       cout << ans << "\n";


    }




    return 0;
}

