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

        int n = 0;
        cin >> n;

        vector<int> a (n);

        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> great (n);

        int M = 0;

        for(int i = 0; i< n; i++){

            M = max(M, a[i]);

            great[i] = M;


        }

        for(int i = 0; i < n; i++){

            if(i % 2 != 0) a[i] = great[i];


        }


        int ans = 0;


        for(int i = 1; i < n; i++){

            if(i % 2 != 0){

               if(a[i - 1] >= a[i]){

                    ans += a[i] - a[i - 1] + 1;
                    a[i - 1] = a[i] - a[i - 1] - 1;

               }

               if(i + 1 < n){

                    if(a[i] <= a[i + 1]){

                            ans += a[i + 1] - a[i] + 1;
                            a[i + 1] = a[i + 1] - a[i] - 1;
                    }

               }


            }


        }

        cout << ans << "\n";


    }




    return 0;
}


