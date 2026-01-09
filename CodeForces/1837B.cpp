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

        string s;
        cin >> s;

        int c = 1;

        vector<int> ans;

        for(int i = 0; i < n - 1; i++){

            if(s[i] == s[i + 1]){

                c++;

            } else {

                ans.pb(c);
                c = 1;

            }



        }

        ans.pb(c);

        sort(rall(ans));


        cout << ans[0] + 1 << "\n";



    }




    return 0;
}

