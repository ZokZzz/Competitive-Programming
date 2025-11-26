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

        int n  = 1;
        cin >> n;

        set<int> s;

        for(int i = 0; i < n; i++){

            int aux  = 1;
            cin>>aux;
            s.insert(aux);


        }//for

        cout << (s.size() * 2) - 1 << "\n";


    }//while




    return 0;
}
