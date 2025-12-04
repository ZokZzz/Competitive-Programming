#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 0, m = 0;
    cin >> n >> m;

    map<string, string> dict;

    for(int i = 0; i < m; i++) {

        string a , b;
        cin >> a >> b;

        dict[a] = b;

    }


    for(int i = 0; i < n; i++) {

        string aux;
        cin >> aux;

        if(aux.size() <= dict[aux].size()) cout << aux << (i == n - 1? "\n" : " ");
        else cout << dict[aux] << (i == n - 1? "\n" : " ");


   }




    return 0;
}

