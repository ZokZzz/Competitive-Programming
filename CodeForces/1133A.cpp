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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int h1, m1;
    char aux;
    cin >> h1 >> aux >> m1;

    int h2, m2;
    cin >> h2 >> aux >>  m2;

    int hm1 = (h1 * 60) + m1;

    int hm2 = (h2 * 60) + m2;

    int h3 = (hm1 + hm2) / 2;

    bool f = true, h = true;

    if(h3 / 60 > 9) f = false;

    if(h3 % 60 > 9) h = false;

    cout << (f == true? "0" : "") << h3 / 60 << ":" << (h == true? "0" : "") << h3 % 60 << "\n";

    return 0;
}

