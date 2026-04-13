#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0;
        cin >> n;

        deque<int> dq;

        for(int i = 0; i < n; i++){

            int aux = 0;
            cin >> aux;

            dq.pb(aux);

        }

        int ans = 0, a = 0, b = 0, c = 0;

        while(!dq.empty()){

            a += dq.front();
            dq.pop_front();
            c++;

            if(a == b) ans = c;
            else if (a > b){

                b += dq.back();
                dq.pop_back();
                c++;

            } else {

                 a += dq.front();
                 dq.pop_front();
                 c++;

            }


        }

        cout << ans << "\n";

    }




    return 0;
}

