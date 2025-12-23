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

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        set<int> sums;

        int sum = 0;

        for(int i = 0; i < n - 1; i++) sum += abs(a[i] - a[i + 1]);

        sums.insert(sum);

        for(int i = 0; i < n; i++) {


            if(i == 0) {

                sums.insert(sum - abs(a[i] - a[i + 1]));


            }else if(i == n - 1) {

             sums.insert(sum - abs(a[i - 1] - a[i]));


            } else {

               sums.insert(sum - (abs(a[i - 1] - a[i])) - (abs(a[i + 1] - a[i])) + (abs(a[i - 1] - a[i + 1])));

            }




        }



        int ans = *sums.begin();

        cout << ans << "\n";


    }


    return 0;
}

