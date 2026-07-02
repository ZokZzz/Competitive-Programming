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



bool check(long long mid, int m, vector<int> a, int n){

    int last = 0;

    for(int i = 0; i < m; i++){

        long long aux = mid;
        aux -= last;

        while(aux > 0){

            if(aux < a[last]){

                a[last] -= aux;
                break;


            }

            if(last == n && aux >= a[n]) return true;

            aux -= a[last];
            aux--;
            last++;


        }


    }

    return false;

}




void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    vector<int> a(n + 1);

    for(int i = 1; i <= n; i++) cin >> a[i];

    while(!a.back()){

        n--;
        a.pop_back();
    }


    long long l = n + 1, r = 1e18;

    while(l < r){

        long long mid = (l + r) / 2;

        if(check(mid, m, a, n)) r = mid;
        else l = mid + 1;

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


