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

        string s;
        cin >> s;

        int one, two, three;
        one = two = three = INF;

        int mi = 1e9;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '1') one = i;
            else if(s[i] == '2') two = i;
            else three = i;

            if(one != INF && two != INF && three != INF){

                int l = min(one, min(two, three));
                int r = max(one, max(two, three));
                mi = min(mi, r - l + 1);


            }



        }

        int ans = (mi == 1e9? 0 : mi);


        cout << ans << "\n";



    }




    return 0;
}

