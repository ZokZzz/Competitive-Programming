#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;

    map<int, vector<int>> pos;

    for(int i = 0; i < n; i++){

        int aux;
        cin >> aux;

        pos[aux].pb(i);

    }//for


    vector<pair<int,int>> ans;

    for(auto p : pos){

        vector<int> a = p.second;

            if(a.size() == 1){
                ans.pb({p.first, 0});
            } else {

                int d = a[1] - a[0];

                bool f = true;

                for(int i = 1; i < a.size(); i++){

                    if(a[i] != a[i - 1] + d){f = false; break;}//if

                }//for


                if(f) ans.pb({p.first, d});



            }//if


    }//for


    cout << ans.size() << "\n";

    for (auto [val, d] : ans) cout << val << " " << d << "\n";


    return 0;
}

