#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;
        vector<int> a(n+1);

        for(int i = 0; i < n; i++) cin >> a[i];


        int ans = 0;


        for(int i = 0, j = i+1; i <= n; i++){


            while(j < n) {

                if((a[j] - a[i]) == j - i) ans++;


                j++;


            }

        }


        cout << ans << "\n";



    }




    return 0;
}

