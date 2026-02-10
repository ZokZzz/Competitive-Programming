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

        string s;
        cin >> s;

        int k = 0;
        cin >> k;

        k = k % 26;

        string ans = "";

        for(int i = 0; i < s.size(); i++){

            ans += ((s[i] - 'A' - k + 26) % 26) + 'A';

        }

        cout << ans << "\n";

    }






    return 0;
}


