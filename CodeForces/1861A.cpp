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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

       string s;
       cin >> s;

       switch(s[0]){

            case '1' : {

                cout << 13 << "\n";
                break;
            }
             case '2' : {

                cout << 23 << "\n";
                break;
            }
             case '3' : {

                cout << 31 << "\n";
                break;
            }
             case '4' : {

                cout << 43 << "\n";
                break;
            }

             case '5' : {

                cout << 59 << "\n";
                break;
            }

             case '6' : {

                cout << 61 << "\n";
                break;
            }

             case '7' : {

                cout << 79 << "\n";
                break;
            }

             case '8' : {

                cout << 83 << "\n";
                break;
            }

             case '9' : {

                cout << 97 << "\n";
                break;
            }


       }

    }


    return 0;
}



