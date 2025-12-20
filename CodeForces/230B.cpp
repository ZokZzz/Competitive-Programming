#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


vector<bool> isPrime;
unordered_set<unsigned long long int> primes;

void cribe(unsigned long long int n) {

    isPrime = vector<bool>(n, true);

    isPrime[0] = isPrime[1] = false;

    for(unsigned long long int i=2; i<n; ++i) {

        if(isPrime[i]) {

            primes.insert(i * i);
            for(int h=2; h*i<n; ++h) isPrime[i*h] = 0;

        }//if

    }//for
}






int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cribe(10000000);

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){


        unsigned long long int x = 0;
        cin >> x;

        if(primes.count(x)) cout << "YES\n";
        else cout << "NO\n";



    }


    return 0;
}

