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

        char cur = ' ';
        cin >> cur;

        string s;
        cin >> s;


        if(cur == 'g') {

            cout << 0 << "\n";
            continue;

        }


        vector<int> green;

        for(int i = 0; i < n; i++){

            if(s[i] == 'g') green.pb(i);

        }

        int minG = *min_element(green.begin(), green.end());

        int ans = 0;

        for(int i = 0; i < n; i++) {

            if(s[i] == cur){

                int aux = i - minG + (i % (n - 1));

                ans = max(ans, aux);

            }


        }

        cout << ans  << "\n";


    }


    return 0;
}



