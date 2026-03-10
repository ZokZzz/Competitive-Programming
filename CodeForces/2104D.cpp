#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1

vector<bool> isPrime;
vector<long long> primes;

void cribe(long long n) {

    isPrime = vector<bool>(n, true);
    primes = vector<long long>();

    isPrime[0] = isPrime[1] = false;

    for(int i=2; i<n; ++i) {

        if(isPrime[i]) {

            primes.pb(i);
            for(int h=2; h*i<n; ++h) isPrime[i*h] = 0;

        }//if

    }//for
}

const long long TAM = (6e6);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    cribe(TAM);

    while(t-- > 0){

        int n = 0;
        cin >> n;

        vector<long long> a (n);

        for(int i = 0; i < n; i++) cin >> a[i];

        if(n == 1){

            cout << 0 << "\n";
            continue;

        }

        sort(rall(a));

        long long coins = 0;

        long long cut = 0;

        for(int i = 0; i < n; i++){

            coins += (a[i] - 2);

            coins -= (primes[i] - 2);

            if(coins >= 0) {

                cut = i + 1;

            }

        }


        cout << n - cut << "\n";


    }



    return 0;
}
