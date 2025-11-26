#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<long long> a (30);

    for(int i = 1; i<=30; i++){

        a[i-1] = pow(2, i);

    }//for


    int t = 1;
    cin >> t;

    while(t-->0){

        long long n = 1;
        cin >> n;

        long long ans = 0;

        for(int i = 0; i < n/2; i++){

            long long aux = (a[i] + a[n-(i+1)]);

            //cout << "a[i] : " << a[i] << " , a[n-i] : " << a[n-1+1] << " .  aux : " << aux << "\n";

            ans = abs(aux - ans);

            //debug(ans);

        }//for


        cout << ans << "\n";



    }//while



    return 0;
}
