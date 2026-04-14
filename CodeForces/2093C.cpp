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

bool isPrime(long long x){

    if(x == 1) return false;

    for(int i = 2; i * i <= x; i++) if(x % i == 0) return false;

    return true;

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        long long x = 0, k = 0;
        cin >> x >> k;

        if( (k == 1 && isPrime(x))) cout << "YES\n";
        else if ((x == 1 && k == 2)) cout << "YES\n";
        else cout << "NO\n";


    }


    return 0;
}


