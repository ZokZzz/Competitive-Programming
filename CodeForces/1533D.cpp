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

    string s, t;
    cin >> s;
    cin >> t;

    reverse(all(s)); reverse(all(t));

    int j = 0;

    for(int i = 0; i < s.size() && j < t.size(); i++){

        if(s[i] == t[j]){

            j++;


        } else {

           i++;

        }



    }


    if(j >= t.size()) cout << "YES\n";
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


