#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-- > 0){

        int n = 0;
        cin >> n;

        string s;
        cin >> s;

        stack<int> st;

        for(char c : s){

            if(st.size() && c == st.top()) st.pop();
            else st.push(c);


        }

        cout << (st.empty() ? "YES\n" : "NO\n");

    }




    return 0;
}

