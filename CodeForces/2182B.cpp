#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()



int can (int a, int b, bool f) {

    long long need = 1;

    int ans = 0;

     while(true){

        if(f){

            if (a < need) break;
            a -= need;

        } else {

            if (b < need) break;
            b -= need;

        }

        ans++;

        need <<= 1;

        f = !f;
    }



    return ans;



}





int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int a = 0, b = 0;
        cin >> a >> b;

        int ans = max(can(a, b, true), can(a, b, false));

        cout << ans << "\n";



    }




    return 0;
}


