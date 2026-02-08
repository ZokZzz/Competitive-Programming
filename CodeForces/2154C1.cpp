#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


vector<int> getFactors (int n){

    vector<int> factors;

    for(int i = 2; i * i <= n; i++){

        if(n % i == 0){

            factors.pb(i);
            while(n % i == 0) n/= i;

        }


    }

    if(n > 1) factors.pb(n);

    return factors;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i =0 ; i < n; i++) cin >> b[i];

        map<int, int> prime;

        for(int x : a){

            vector<int> factors = getFactors(x);

            for(int f : factors) prime[f]++;

        }

        bool z = false;

        for(auto const& [f, c] : prime){

            if(c >= 2){

                z = true;
                break;

            }

        }

        if(z){

            cout << 0 << "\n";
            continue;

        }

        bool o = false;


        for(int i = 0; i < n; i++){

            vector<int> factors = getFactors(a[i] + 1);

            for(int f : factors){

                if(prime[f] >= 1){

                    o = true;
                    break;

                }

            }

        }

        if(o) cout << 1 << "\n";
        else cout << 2 << "\n";


    }




    return 0;
}

