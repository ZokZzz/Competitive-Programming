#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n= 0;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;

        for(int i = 1; i < n; i++){

            if(a[i] == 7 - a[i - 1] || a[i] == a[i - 1]){

                ans++;
                i++;

            }


        }

        cout << ans << "\n";



    }


    return 0;
}
