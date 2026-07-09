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
#define sz(a) ((int)a.size())


void make(vi &a, bool f){

    for(int i = 0; i < a.size(); i++){

        if(f) a[i] = 1;
        else a[i] = 0;

        f = !f;

    }

}


long long check(vll &p, vi &op){

    int j = 0;
    long long c = 0;

    if(op[0] == 1) j = 0;
    else j = 1;

    for(int i = 0; i < p.size() && j < p.size(); i++){

        if(p[i]){

            if(p[i] == op[j]){

                c += abs(i - j);
                j += 2;

            }

        }

    }

    return c;
}



void tc(){

  long long n = 0;
  cin >> n;

  vector<long long> a(n), p(n);

  long long cp = 0, ci = 0;

  for(int i = 0; i < n; i++){

      cin >> a[i];

      p[i] = a[i] % 2;

      if(p[i]) ci++;
      else cp++;



  }

  if(n % 2 == 0){

    if(ci > n / 2 || cp > n / 2){

        cout << -1 << "\n";
        return;

    }

  } else {


      if(ci > (n / 2) + 1 || cp > (n / 2) + 1){

        cout << -1 << "\n";
        return;

      }

  }


  vector<int> op1(n), op2(n);

  make(op1, true); make(op2, false);

  long long c1 = 1e15, c2 = 1e15;

  if(count(all(op1), 1) == count(all(p), 1)) c1 = check(p, op1);

  if(count(all(op2), 1) == count(all(p), 1)) c2 = check(p, op2);

  long long ans = min(c1, c2);

  cout << ans << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t-->0){
        tc();
    }
}
