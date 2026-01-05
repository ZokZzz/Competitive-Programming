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

    int t = 0;
    cin >> t;

    while(t-- > 0){

        unsigned long long int n = 0, k = 0, x = 0;
        cin >> n >> k >> x;


        unsigned long long int mi = (k * (k + 1)) / 2, ma = (n * (n + 1) - (n - k) * (n - k + 1)) / 2;


        if(x >= mi && x <= ma) cout << "YES\n";
        else cout << "NO\n";



    }




    return 0;
}


