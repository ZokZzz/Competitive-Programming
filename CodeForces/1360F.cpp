#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define sz(a) ((int)a.size())
#define full(x, y) memset(x, y, sizeof(x))


void tc(){

    long long n = 0, m = 0;
    cin >> n >> m;


    vector<string> words(n);

    for(int i = 0; i < n; i++) cin >> words[i];

    string ans = words[0];

    for(int i = 0; i < m; i++){

        char save = ans[i];

        for(char j = 'a'; j <= 'z'; j++){

            ans[i] = j;

            bool flag = true;

            for(int k = 0; k < n; k++){

                long long c = 0;

                for(int z = 0; z < m; z++) if(words[k][z] != ans[z]) c++;

                if(c > 1){

                    flag = false;
                    break;

                }

            }

            if(flag){

                cout << ans << "\n";
                return;

            }


        }


        ans[i] = save;

    }


    cout << "-1\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t-->0){
        tc();
    }
}


