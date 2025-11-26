#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define debug(x) cout << #x << " : " << x << "\n"



long long beauty (vector <long long> &a){

    long long b = a[0];

    for(int i = 1; i < a.size(); i++){
        b = __gcd(b, a[i]);
    }//for


    return b;

}



vector<bool> isPrime;
vector<long long> primes;

void cribe(long long n) {

    isPrime = vector<bool>(n, true);
    primes = vector<long long>();

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i < n; i++) {

        if(isPrime[i]) {

            primes.pb(i);
            for(int h=2; h*i < n; h++) isPrime[i*h] = 0;

        }//if

    }//for
}






int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0, k = 0;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long m = *max_element(a.begin(), a.end());

        cribe(m);


        for(int i = 0; i < primes.size(); i++){
                cout << primes[i] << (i == primes.size() - 1 ? "\n" : " ");
        }







    }//while




    return 0;
}
