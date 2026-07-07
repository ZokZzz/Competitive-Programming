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

    long long p = 0, d = 0;
    cin >> p >> d;

    stack<long long> st;

    for(int i = 0; i < p; i++) st.push(i);

    vector<long long> f (p + 1, 0), idx(p + 1);

    for(int i = 0; i < d; i++){

        long long take = 0;
        cin >> take;

        for(int j = 0; j < take; j++){

            idx[j]++;
            st.pop();


        }

        sort(all(f), [](long long a, long long b){

            return f[a] > f[b];

        });

        for(int j = 0; j < take; j++) st.push(j);


    }

    long long m = 1000000, ans = 0;


    for(int i = 0; i < p; i++){

        if(f[i] < m){

            ans = i;
            m = f[i];


        }


    }

    cout << ans << "\n";

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

