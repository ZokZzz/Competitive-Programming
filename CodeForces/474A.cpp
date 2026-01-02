#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    char miss;
    cin >> miss;

    int e = 0;

    if(miss == 'R') e--;
    else e++;

    string a = "qwertyuiop", b = "asdfghjkl;", c = "zxcvbnm,./";

    string message = " ", ans;
    cin >> message;


    for(char i : message){


        if(a.find(i) != string :: npos){

            ans.pb(a[a.find(i, 0) + e]);

        }

        if(b.find(i) != string :: npos){

            ans.pb(b[b.find(i) + e]);

        }

        if(c.find(i) != string :: npos){

            ans.pb(c[c.find(i) + e]);

        }


    }



    cout << ans << "\n";



    return 0;
}


