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

        int k = 0;
        cin >> k;

        string s;
        cin >> s;

        int aux = 0, ans = 0;

        bool f = true;

        for(int i = 0; i < n; i++){

            if(s[i] == '0'){

                aux++;

            } else {

                if(f){

                    ans++;
                    f = false;

                } else if(aux >= k - 1) ans++;

                aux = 0;

            }


        }

        cout << ans << "\n";


    }




    return 0;
}

