#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    const int tam = 1e4 + 7;

    int x = 0, y = 0;
    cin >> x >> y;


   for(int a = 0; a <= tam; a++) {

        for(int b = 0; b <= tam; b++ ) {


            if( ((x * (1 + (2*a))) - b)  == y) {

                cout << a + b << "\n";
                return 0;

            }


        }

   }



    return 0;
}


