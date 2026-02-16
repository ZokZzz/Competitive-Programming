#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1

int sorner (int n){

    while(n % 2 == 0) n /= 2;

    return n;

}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n= 0;
        cin >> n;

        vector<int> a(n + 1);

        for(int i = 1; i <= n; i++) cin >> a[i];

        bool f = true;

        for(int i = 1; i <= n; i++){

            if(sorner(a[i]) != sorner(i)){

                f = false;
                break;

            }

        }





        if(f) cout << "YES\n";
        else cout << "NO\n";


    }


    return 0;
}
