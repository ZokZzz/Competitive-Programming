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

        int n = 0;
        cin >> n;


        switch(n) {

        case 1 : {

        cout << 1 << "\n";
        continue;
        break;

        }

        case 2 : {

        cout << 9 << "\n";
        continue;
        break;

        }

        case 3 : {

        cout << 29 << "\n";
        continue;
        break;

        }


        case 4 : {

        cout << 56 << "\n";
        continue;
        break;

        }






        }//switch


        int pos = ((n*n) - n - 1);

        cout << (pos + (pos + 1) + (pos - 1) + (pos + n) + (pos - n)) << "\n";



    }

    return 0;
}




