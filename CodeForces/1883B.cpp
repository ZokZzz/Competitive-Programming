#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0, k = 0;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> f;

        for(char i : s) f[i]++;

        int c = 0;

        for(auto i : f){

            if(i.second % 2 != 0) c++;

        }

        if(c > k + 1) cout << "NO\n";
        else cout << "YES\n";




    }




    return 0;
}


