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

    const long long MIN = 1000000000;

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0;
        cin >> n;

        int bn = (n * (n- 1)) / 2;

        vector<long long> b (bn);

        for(int i = 0; i < bn; i++) cin >> b[i];

        sort(all(b));


        for(int i = 0; i < bn; i += --n) cout << b[i] << " ";

        cout << MIN << "\n";



    }




    return 0;
}

