#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int t = 0;
    cin >> t;

    while(t-->0){

      int n = 0;
      cin >> n;

      vector<long long> a(n), b(n);

      for(int i = 0; i < n; i++) cin >> a[i];

      for(int i = 0; i < n; i++) cin >> b[i];

      long long m = 0, M = 0;

      for(int i = 0; i < n; i++) {


       long long aM = max(m - a[i], b[i] - M);
       long long am = min(M - a[i], b[i] - m);


        m = aM, M = am;

      }


      cout << m << "\n";


    }




    return 0;
}

