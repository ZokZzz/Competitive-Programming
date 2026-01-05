#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        long long n = 0;
        cin >> n;

        long long ans = 1;

        for(long long i = 2; i < 31; i++) {

            long long aux = (1 << i) - 1;

            if(n % aux == 0) {

                ans = n / aux;
                break;

            }


        }


        cout << ans << "\n";






    }




    return 0;
}

