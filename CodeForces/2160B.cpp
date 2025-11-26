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

        int n = 1;
        cin >> n;

        set<int>a;

        for(int i = 0; i < n; i++){

            int aux = 0;
            cin >> aux;
            a.insert(aux);

        }//for


        vector<int>b;

        for(auto x : a){
            b.pb(x);
        }//for

        sort(b.begin(), b.end());

        bool f = true;

        for(int i = 0; i < b.size(); i++){

            if(b[i] != i){

                cout << i << "\n";
                f = false;
                break;


            }//if

        }

        if(f){
            cout << b[b.size()-1] + 1 << "\n";
        }//if




    }//while


    return 0;
}

