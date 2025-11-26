#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t-->0){

        string s;
        cin>>s;

        set<char>a;

        bool f = false;

        for(int i = 0; i< s.size(); i++){

               if(s[i] == s[i+1]){
                 f = true;
               }//if

        }//for


        if(f){
            cout << 1 << "\n";
        } else {
            cout << s.size() << "\n";
        }//if


    }//while




    return 0;
}
