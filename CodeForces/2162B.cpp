#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


bool palindrome(string s){


    string r = s;
    reverse(s.begin(), s.end());
    return r == s;

}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        vector<int> ans;

        for(int i = 0; i < n; i++) {

        if(s[i] == '0') ans.pb(i+1);

        }

        cout << ans.size() << "\n";

        for(int i = 0; i < ans.size(); i++){

            cout << ans[i] << (i == ans.size() - 1? "\n" : " ");

        }


    }//while




    return 0;
}


