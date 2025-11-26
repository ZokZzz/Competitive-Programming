#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s = " ";
    cin >> s;

    ll m = 0;
    cin >> m;

    vector <int> aux;
    aux.pb(0);

    for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                aux.pb(1);
            } else {
                aux.pb(0);
            }//if

    }//for


    vector <int> ps;
    ps.pb(0);

    for(int i = 1; i < s.size(); i++){

        ps.pb(aux[i] + ps[i-1]);

    }//for



    for(int i = 0; i < m; i++){

        int l = 0, r = 0;
        cin >> l >> r;

        cout << ps[r-1] - (l-1 >= 0? ps[l-1] : 0) << "\n";

    }//for




    return 0;
}
