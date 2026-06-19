#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF 1e7
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define sz(a) ((int)a.size())
#define full(x, y) memset(x, y, sizeof(x))


bool bake(long long mid, vector<long long>& needed,  vector<long long>& have, long long k){

    long long powder = k;

    for(int i = 0; i < needed.size(); i++){

        if(have[i] < (needed[i] * mid)){

            long long miss = (needed[i] * mid) - have[i];

            if(miss > powder) return false;

            powder -= miss;

        }

    }

    return true;

}


void tc(){

    long long n = 0, k = 0;
    cin >> n >> k;

    vector<long long> needed (n), have(n);

    for(int i = 0; i < n; i++) cin >> needed[i];

    for(int i = 0; i < n; i++) cin >> have[i];


    long long l = 0, r = INF;

    while(r - l > 1){

        long long mid = (r + l + 1) / 2;

        if(bake(mid, needed, have, k)) l = mid;
        else r = mid;



    }

    cout << l << "\n";


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t-->0){
        tc();
    }
}
