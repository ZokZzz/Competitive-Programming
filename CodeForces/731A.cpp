#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    string s;
    cin>>s;

    // z e u s

    int total = 0, pos = 97;



    for(int i = 0; i < s.size(); i ++){

        int letra = s[i];

        total += min(abs(pos-letra), 26 - abs(pos-letra));

        pos = letra;


    }//for


    cout << total << "\n";


    return 0;
}

