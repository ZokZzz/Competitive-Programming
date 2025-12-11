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


        int ans = 0, current = 0;

        bool f = false;

        for(int i = 0; i < 2 * n; i++){

          if(f) current++;

          if(s[i % n] == cur) f = true;

          if(s[i % n] == 'g') {

            f = false;
            ans = max(current, ans);
            current = 0;


          }


        }



        cout << ans  << "\n";


    }


    return 0;
}



