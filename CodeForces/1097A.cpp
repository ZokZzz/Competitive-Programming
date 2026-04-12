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

    string mine;
    cin >> mine;

    set<char> hand;

    for(int i = 0; i < 5; i++){

        string aux;
        cin >> aux;

        hand.insert(aux[0]);
        hand.insert(aux[1]);

    }

    if(hand.count(mine[0]) || hand.count(mine[1])) cout << "YES\n";
    else cout << "NO\n";




    return 0;
}

