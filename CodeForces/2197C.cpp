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

    while(t-->0){

      long long p = 0, q = 0;
      cin >> p >> q;

      if(3 * p == 2 * q) cout << "Bob\n";
      else if (p >= q || 3 * p < 2 * q) cout << "Alice\n";
      else cout << "Bob\n";


    }




    return 0;
}



