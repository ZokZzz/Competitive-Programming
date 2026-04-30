#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>

int minSeq(string a, string b, int pos){

    int n = a.size(), ans = b.size();

    for(int i = 0; i < n; i++){

        if(pos >= b.size()) break;

        if(a[i] == b[pos]){

            pos++;
            ans--;

        }

    }



    return ans;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        string a, b;
        cin >> a >> b;

        if(a == b){

            cout << a.size() << "\n";
            continue;
        }

        if(a.find(b) != string::npos){

            cout << a.size() << "\n";
            continue;

        }


        int m = INT_MAX;

        for(int i = 0; i < b.size(); i++) m = min(minSeq(a, b, i), m);

        cout << a.size() + m << "\n";


    }




    return 0;
}

