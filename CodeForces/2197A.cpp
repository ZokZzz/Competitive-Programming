#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


long long d(long long i){

    long long s = 0;

    while(i > 0){

        s += i % 10;
        i /= 10;

    }

    return s;

}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        long long n = 0;
        cin >> n;

        long long ans = 0;

        for(int i = 1; i <= 81; i++){

            long long aux = i + n;

            if(aux - d(aux) == n) ans++;

        }

        cout << ans << "\n";

    }




    return 0;
}

