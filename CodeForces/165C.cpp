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


bool can(string s, int k, int m){








}



void tc(){

    int k = 0;
    cin >> k;

    string s;
    cin >> s;

    int l = 0, r = 1000006;

    while(r - l > 1){

        int mid = (l + r + 1) / 2;

        if(can(s, k, mid)) l = mid;
        else r = mid;


    }


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

