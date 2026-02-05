#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int common(string a, string b, int m, int n){

    if(m == 0 || n == 0  || a[m-1] != b[n - 1]) return 0;

    return 1 + common(a, b, m - 1, n - 1);

}


int sorner (string a, string b){

    int s = 0;

    for(int i = 0; i < a.size(); i++) {

        for(int j = 0; j < b.size(); j++) {

            s = max(s, common(a, b, i + 1, j + 1));


        }


    }


    return s;



}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        string a, b;
        cin >> a >> b;

        int ans = sorner(a, b);

        cout << (a.size() + b.size() - (2 * ans) ) << "\n";


    }



    return 0;
}

