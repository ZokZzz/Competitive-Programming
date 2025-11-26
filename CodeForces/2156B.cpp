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

        int n = 0, q = 0;
        cin >> n >> q;

        string s;
        cin >> s;

        vector<long long> queries(q);

        for(int i = 0; i < q; i++) cin >> queries[i];


        for(int i = 0; i < q; i++){

            long long x = queries[i], ans = 0;

            for(int j = 0; j < n; j++) {

              if(s[j] == 'A'){
                x--;
                ans++;
              } else {

                 x /= 2;
                 ans++;

              }

                if(j == n - 1 && x < 1) j = 0;

                if(x == 0){

                    cout << ans << "\n";
                    continue;

                }


            }




        }





    }






    return 0;
}

