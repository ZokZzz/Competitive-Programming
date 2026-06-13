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

    vector<string> words(n);

    for(int i = 0; i < n; i++) cin >> words[i];

    string key = words[0];

    set<char> s(all(key));

    int q = 0;
    cin >> q;

    for(int i = 0; i < q; i++){

        int ans = 0;

        string response;
        cin >> response;

        for(auto j : words){

            bool f = true;

            for(int k = 0; k < key.size(); k++){

                auto it = s.find(j[k]);

                if(response[k] == 'X' && j[k] == key[k]) f = false;
                else if(response[k] == '*' && j[k] != key[k]) f = false;
                else if(response[k] == '!' && !(it != s.end())) f = false;

            }

            if(f) ans++;


        }

        cout << ans << "\n";



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

