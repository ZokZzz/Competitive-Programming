#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, ac = 0;
    cin >> n;

    vector<pair<int,int>> a, ans, queries;

    for(int i = 0; i < n; i++) {

        int c = 0, p = 0;
        cin >> c >> p;

        a.pb({p, c});

    }

    ans = a;

    sort(ans.rbegin(), ans.rend());

    set<int> b;

    int q = 0;
    cin >> q;

    for(int i = 0; i < q; i++) {

        int aux = 0;
        cin >> aux;
        b.insert(aux);

    }



    for(int i = 0; i < n; i++) {

       auto it = b.upper_bound(ans[i].second);

       if (it != b.begin()) {
            --it;
            cout << *it << "\n";


       }


    }




    return 0;
}

