#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF 1e9

vector < tuple< int, int, int> > edges;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, m = 0;

    while(cin >> n >> m && (n && m)){

        edges.clear();


         for (int i = 0; i < m; i++) {

            int a = 0, b = 0, w = 0;
            cin >> a >> b >> w;
            edges.emplace_back(a, b, w);

        }

        vector<int> dist(n, INF);
        dist[0] = 0;

        for (int i = 0; i < n - 1; i++) {

            for (auto e : edges) {

                int a = 0, b = 0, w = 0;
                tie(a, b, w) = e;
                if (dist[a] < INF) dist[b] = min(dist[b], dist[a] + w);
            }
        }

        cout << dist[0] << "\n";


    }




    return 0;
}


