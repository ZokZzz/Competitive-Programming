#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int parity (int n){

    if(n % 2 != 0) return 1;

    return 0;


}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<int> a (n);

        for(int i = 0; i < n; i++) cin >> a[i];

        bool f = true;


        for(int i = 0; i < n - 2; i++){

            if(parity(a[i]) != parity(a[i + 2])) f = false;

        }


        if(f) cout << "YES\n";
        else cout << "NO\n";


    }




    return 0;
}

