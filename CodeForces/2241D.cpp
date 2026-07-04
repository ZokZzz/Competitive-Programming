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

    vector<long long> a (n), b (n);

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cin >> b[i];


    vector<long long> p(n), q(n);

    long long aux = 0;

    for(int i = 0; i < n; i++) {

            aux += a[i];
            p[i] = aux;

    }

    aux = 0;

    for(int i = 0; i < n; i++) {

            aux += b[i];
            q[i] = aux;

    }

    bool f = true;

    for(int i = 0; i < n; i++){


        if(q[i] < p[i]){

            f = false;
            break;

        }

    }


   if(f) cout << "YES\n";
   else cout << "NO\n";


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

