#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t-->0){

     set<int>a;

     for(int i = 0; i < 4; i++){
        int aux = 0;
        cin >> aux;
        a.insert(aux);
     }


     cout << (a.size() == 1? "YES\n" : "NO\n" );



    }




    return 0;
}


