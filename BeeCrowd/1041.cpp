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

    double x = 0, y = 0;
    cin >> x >> y;

    if(x == 0 && y == 0) {

        cout << "Origem\n";


    } else if (y == 0){

        cout << "Eixo X\n";

    } else if (x == 0){

        cout << "Eixo Y\n";

    } else if (x > 0 && y > 0) {

        cout << "Q1\n";

    } else if (x < 0 && y < 0) {

        cout << "Q3\n";

    } else if (x > 0 && y < 0) {

        cout << "Q4\n";

    } else {

        cout << "Q2\n";

    }



    return 0;
}


