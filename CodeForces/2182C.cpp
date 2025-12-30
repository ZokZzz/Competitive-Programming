#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


bool can (vector<long long> x, vector<long long> y, long long n, long long k){


    bool ans = 1;

    for(int i = 0; i < n; i++) {

        if(x[i] <= y[ (i + k) % n]) ans = 0;

    }



    return ans;


}






int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

       long long n = 0;
       cin >> n;

       vector<long long> a (n), b (n), c (n);

       for(int i = 0; i < n; i++) cin >> a[i];

       for(int i = 0; i < n; i++) cin >> b[i];

       for(int i = 0; i < n; i++) cin >> c[i];

       long long k1 = 0, k2 = 0;

       for(int i = 0; i < n; i++){

            if(can(b, a, n, i)) k1++;


            if(can(c, b, n, i)) k2++;


       }


        cout << (k1 * k2 * n) << "\n";


    }




    return 0;
}


