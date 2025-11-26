#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int n = 0, k = 0, m = 0;
    cin >> n >> k >> m;

    vector<pair<string, ll>> words(n);

    for(int i = 0; i < n; i++){
            cin >> words[i].first;
    }//for

    for(int i = 0; i < n; i++){
            cin >> words[i].second;
    }//for


    map<string, int> cost;

    for(int i = 0; i < n; i++){

        cost[words[i].first] = words[i].second;

    }//for




    for(int i = 0; i < k; i++){

        int x = 0, mini = INT_MAX;
        cin >> x;

        vector<int> indexs(x);

        for(int j = 0; j < x; j++){
            cin >> indexs[j];
        }//for

        for(int j = 0; j < indexs.size(); j++) {

            int in = indexs[j] - 1;

            mini = min(cost[words[in].first], mini);

        }//for


        for(int j = 0; j < indexs.size(); j++) {

            int in = indexs[j] - 1;

            cost[words[in].first] = mini;

        }//for



    }//for main


    ll ans = 0;

    for(int i = 0; i < m; i++) {

      string aux = " ";
      cin >> aux;


      int val = cost[aux];


      ans += val;

    }//for


    cout << ans << "\n";

    return 0;
}

