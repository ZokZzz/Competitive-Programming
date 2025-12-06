#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0, k = 0;
        cin >> n >> k;

        string s;
        cin >> s;


        int ans = 0, sleep = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == '0' && sleep <= 0) ans ++;
            else if(s[i] == '1') sleep = k;
            else sleep--;

        }


        cout << ans << "\n";


    }




    return 0;
}

