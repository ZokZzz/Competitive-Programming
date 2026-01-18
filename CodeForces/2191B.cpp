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

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<int> a (n);

        map<int, int> mp;

        for(int i = 0; i < n; i++){

            cin >> a[i];
            mp[a[i]]++;

        }


        if(mp[0] == 0) cout << "NO\n";
        else if(mp[1] > 0) cout << "YES\n";
        else cout << (mp[0] == 1? "YES" : "NO") << "\n";



    }




    return 0;
}


