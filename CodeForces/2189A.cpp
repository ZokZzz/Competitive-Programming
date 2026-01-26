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

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0, h = 0, l = 0;
        cin >> n >> h >> l;

        if(h > l) swap(h, l);

        int aux;

        int ch = 0, cl = 0;

        for(int i = 0; i < n; i++){

            cin >> aux;

            if(aux <= h) ch++;

            if(aux <= l) cl++;

        }

        cout << min(ch, cl / 2) << "\n";

    }




    return 0;
}

