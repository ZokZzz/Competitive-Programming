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

        int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;

        vector<int> sun = {a, b}, sla = {c, d};

        sort(sun.begin(), sun.end()); sort(sla.begin(), sla.end());


        if((sun[1] > sla[1] && sun[0] > sla[1])) cout << 4 << "\n";
        else if ((sun[1] > sla[1] && sun[0] < sla[1])  || (sun[1] < sla[1] && sun[0] > sla[1])) cout << 2 << "\n";
        else cout << 0 << "\n";



    }


    return 0;
}


