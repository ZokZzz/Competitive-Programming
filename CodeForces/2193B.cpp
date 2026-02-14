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

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int l = -1;

        for(int i = 0; i < n; i++){

            if(a[i] != n - i){

                l = i;
                break;

            }

        }


        if(l == -1){

            for(int i = 0; i < n; i++) cout << a[i] << (i + 1 == n? "\n" : " ");

        } else {

            int target = n - l;
            int r = 0;

            for(int i = l; i < n; i++){

                if(a[i] == target){

                    r = i;
                    break;

                }

            }

            reverse(a.begin() + l, a.begin() + r + 1);

            for(int i = 0; i < n; i++) cout << a[i] << (i + 1 == n? "\n" : " ");


        }




    }




    return 0;
}

