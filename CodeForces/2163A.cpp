#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        bool f = true;

        for(int i = 1; i < n; i+=2) {

            if(i == n-1) break;

            if(a[i] != a[i + 1]) f = false;


        }


        if(f) cout << "YES\n";
        else cout << "NO\n";



    }




    return 0;
}

