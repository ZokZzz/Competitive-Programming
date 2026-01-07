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

    while(t-->0) {

        string s;
        cin >> s;

        int m = 0;

        stack<char> u, o;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '0' && u.empty()) {

                o.push(s[i]);

            } else if(s[i] == '1' && o.empty()){

                u.push(s[i]);

            } else if(s[i] == '0' && !u.empty()){

                u.pop();
                m++;


            } else if(s[i] == '1' && !o.empty()){

                o.pop();
                m++;

            }


        }


        if(m % 2 == 0){

            cout << "NET\n";

        } else {

            cout << "DA\n";

        }



    }




    return 0;
}

