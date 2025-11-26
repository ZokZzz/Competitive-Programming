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

    if(n == 1){

        cout << 1 << "\n";
        return 0;

    }//if

    if(n < 4) {

      cout << "NO SOLUTION\n";
      return 0;


    }//if


    vector<int> ans;

    for(int i = 1; i <= n; i++) {

        if(i % 2 == 0) ans.pb(i);

    }//for


    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0) ans.pb(i);

    }//for


    for(int i = 0; i < ans.size(); i++){

        cout << ans[i] << (i == ans.size()-1? "\n" : " ");

    }


    return 0;
}

