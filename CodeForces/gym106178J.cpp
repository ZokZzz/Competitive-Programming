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

long long countStr(string &o, string &sub){

    long long c = 0;
    string su = "";

    if(sub.size() > o.size()) return 0;

    for(int i = 0; i <= (o.size() - sub.size()); i++){

        if(o.substr(i, sub.size()) == sub) c++;

    }

    return c;



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long ans = 0;

    string a = "ha", b = "boooo", c = "bravo";

    ans += countStr(s, a);
    ans += (countStr(s, b) * (-1));
    ans += countStr(s, c) * 3;


    cout << ans << "\n";



    return 0;
}

