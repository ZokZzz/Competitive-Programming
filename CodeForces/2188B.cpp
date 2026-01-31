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

    while(t-->0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        int cOne = 0;

        for(int i = 0; i < n; i++) if(s[i] == '1') cOne++;


        if(cOne){


            int ans = cOne;

            int ul, ur;
            ul = ur = INF;


            for(int i = 0; i < n; i++){

                if(s[i] == '1') {
                    ul = i;
                    break;

                }

            }

            for(int i = 0; i < n; i++){

                if(s[i] == '1') {
                    ur = i;

                }

            }

            vector<int> z;

            int c = 0;

            for(int i = ul; i <= ur; i++){

                if(s[i] == '0'){
                    c++;

                } else {

                    z.pb(c);
                    c = 0;

                }

            }


            for(int i : z) ans += i / 3;

            ans += ((ul - 0) + 1) / 3;
            ans += ((n - ur - 1) + 1) / 3;

            cout << ans << "\n";






        } else {

            cout << (n + 2) / 3 << "\n";

        }




    }




    return 0;
}
