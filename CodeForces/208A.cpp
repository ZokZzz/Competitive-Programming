#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string d;
    cin >> d;

    string borrar = "WUB";
    size_t pos = 0;
    while ((pos = d.find(borrar, pos)) != string::npos) {
        d.replace(pos, borrar.length(), " ");
    }//while

    stringstream ss(d);
    string palabra, resultado;
    while (ss >> palabra) {
        if (!resultado.empty()) resultado += " ";
        resultado += palabra;
    }//while

    cout<<resultado<<"\n";


    return 0;
}

