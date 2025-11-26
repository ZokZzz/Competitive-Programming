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

        int n = 0, sorner = 0;
        cin >> n;

        string s;
        cin >> s;

        char c = s[s.size()-1];


        for(int i = 0; i < n; i++) {

            if(s[i] == c) sorner++;

        }


        cout << s.size() - sorner << "\n";



    }




    return 0;
}

