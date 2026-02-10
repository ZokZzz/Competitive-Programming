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

    cin.ignore();

    while(t-- > 0){

        string dieta;
        getline(cin, dieta);

        string d, a;
        getline(cin, d);
        getline(cin, a);


        string comida = d + a;

        vector<int> f (26, 0);

        for(char c : dieta) f[c - 'A']++;

        bool cheat = false;

        for(char c : d + a){

            int x = c - 'A';

            if(f[x] == 0){

                cheat = true;

            }

            f[x]--;

        }

        if(cheat) {

            cout << "CHEATER\n";
            continue;

        }

        string ans = "";

        for(int i = 0; i < 26; i++) ans += string(f[i], char(i + 'A'));

        cout << ans << "\n";




    }




    return 0;
}

