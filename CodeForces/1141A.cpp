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

    long long n = 0, m = 0;
    cin >> n >> m;

    if(m % n == 0){

        long long r = m / n, ans = 0;

        while(r > 1){

             if(r % 2 != 0 && r % 3 != 0){

                cout << -1 << "\n";
                return 0;

             }


            if(r % 2 == 0){
                ans++;
                r /= 2;

            }

             if(r % 3 == 0){
                ans++;
                r /= 3;

            }


        }

        cout << ans << "\n";


    } else cout << -1 << "\n";




    return 0;
}

