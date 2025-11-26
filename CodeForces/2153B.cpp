#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


bool can(int x, int y, int z) {
    for(int i = 0; i < 32; i++) {
        int xi = (x >> i) & 1;
        int yi = (y >> i) & 1;
        int zi = (z >> i) & 1;


        if (!(
            (xi==0 && yi==0 && zi==0) ||
            (xi==0 && yi==1 && zi==0) ||
            (xi==0 && yi==0 && zi==1) ||
            (xi==1 && yi==0 && zi==0) ||
            (xi==1 && yi==1 && zi==1)
        )) return false;
    }

   return true;
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t-->0){

        int x = 1, y = 1, z = 1;
        cin >> x >> y >> z;

        if(can(x, y, z)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }//if



    }//while





    return 0;
}

