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

        string s;
        cin >> s;

        vector<int> one;

        for(int i = 0; i < n; i++){

                if(s[i] == '1'){

                    one.pb(i);

                }


        }

        if(one.empty()){

            cout << (n + 2) / 3 << "\n";
            continue;

        } else {

            vector<int> zero;

            zero.pb(one[0] - 0);

            for(int i = 0; i < one.size() - 1; i++){

                zero.pb(one[i + 1] - one[i]);

            }

            zero.pb(n - 1 - one[one.size() - 1]);

            int sum = 0;

            for(int i = 0; i < zero.size(); i++){

                sum += (zero[i] / 2) - 1;

            }

            cout <<  << "\n";


        }




    }




    return 0;
}

