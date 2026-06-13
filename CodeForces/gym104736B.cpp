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

    int n = 0;
    cin >> n;

    map<int, int> f;

    for(int i = 0; i < 3 * n; i++){

        int aux;
        cin >> aux;

        f[aux]++;

    }

    bool h = false;

    for(auto i : f){

        if(i.second % 3 != 0){

            h = true;
            break;

        }



    }

    if(h) cout << "Y\n";
    else cout << "N\n";


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


