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

        int n = 1;
        cin >> n;

        set<int>ans;

        for(int i = 0; i < n; i++){

            int aux = 1;
            cin >> aux;
            ans.insert(aux);

        }//for

        cout << ans.size() << "\n";

    }//while





    return 0;
}
