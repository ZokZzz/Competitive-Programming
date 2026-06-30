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
#define sz(a) ((int)a.size())
#define full(x, y) memset(x, y, sizeof(x))


void tc(){

    long long n = 0, k = 0;
    cin >> n >> k;

    vector<long long> bits(32);

    for(int i = 0; i <= 31; i++) bits[i] = 1LL << i;

    long long ans = 0;

    int i = 0;

    while(){


        if(n >= bits[i]){

            n -= bits[i] * k;
            ans += bits[i] * k;

        } else {

            i++;

        }

    }

    cout << ans << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t-->0){
        tc();
    }
}

