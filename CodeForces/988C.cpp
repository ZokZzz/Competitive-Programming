#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int k = 0;
    cin >> k;

    vector<int>a[k];

    map<int, pair<int, int>> seen;

    for(int i = 0; i < k; i++) {

        int n = 0, sum = 0;
        cin >> n;

        for(int j = 0; j < n; j++){

            int aux = 0;
            cin >> aux;

            sum += aux;

            a[i].pb(aux);

        }


        for(int j = 0; j < n; j++) {

            int nsum = sum - a[i][j];

            if(seen.count(nsum) && seen[nsum].first != i) {

                cout << "YES\n";
                cout << seen[nsum].first + 1 << " " << seen[nsum].second + 1 << "\n";
                cout << i+1 << " " << j+1 << "\n";

                return 0;

            }

            seen[nsum] = {i, j};


        }


    }


    cout << "NO\n";


    return 0;
}
