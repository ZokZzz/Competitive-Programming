#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;

    string s;
    cin >> s;

    multiset<string> f; set<string> se;

    for(int i = 0; i < n - 1; i++){

        string aux;
        aux.pb(s[i]); aux.pb(s[i + 1]);
        f.insert(aux);
        se.insert(aux);

    }

    int m = 0; string ans;

    for(string i : se){


        if(f.count(i) > m){
            m = f.count(i);

        }

    }

    for(string i : se){

       if(f.count(i) == m) {ans = i; break;}

    }


    cout << ans << "\n";


    return 0;
}



