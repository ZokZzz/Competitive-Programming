#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long n = 0;

    for(int i = 0; i < min((int)s.size(), 12); i++){

        n *= 10;
        n += s[i] - '0';

    }

    map<long long, long long> primes;

    for(long long i = 2; i * i <= n; ++i){

        while(n % i == 0){

            primes[i]++;
            n /= i;

        }

    }

    if(n != 1) primes[n]++;

    long long need = s.size() - 12;

    if(need > 0){

        primes[2] += need;
        primes[5] += need;

    }

    cout << primes.size() << "\n";

    for(auto i : primes) cout << i.first << " " << i.second << "\n";

    return 0;
}



