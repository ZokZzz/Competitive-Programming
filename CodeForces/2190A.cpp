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


void tc(){

    long long n = 0;
    cin >> n;

    string s;
    cin >> s;

    string aux = s;
    sort(all(aux));


    bool f = true;

    long long z = 0, o = 0;

    for(int i = 0; i < n; i++) if(s[i] - '0') z++; else o++;

    if(z && o && aux != s){

        vector<long long> ans;

        vector<long long> a, b;

        for(int i = 0; i< n; i++) a.pb(s[i] - '0');

        b = a;

        sort(all(b));

        for(int i = 0; i < n; i++) if(a[i] != b[i]) ans.pb(i + 1);

        cout << "Alice\n";

        cout << ans.size() << "\n";

        for(auto i : ans) cout << i << " ";

        cout << "\n";



    } else {

        cout << "Bob\n";

    }







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

