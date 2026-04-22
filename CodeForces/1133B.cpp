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

    long long n = 0, k = 0;
    cin >> n >> k;

    deque<long long> a;

    for(int i = 0; i < n; i++){

        long long aux = 0;
        cin >> aux;
        a.pb(aux);

    }


    long long ans = 0, siz = 0, sum = 0;

    while(a.size() > 2){

        sum += a.back();

        siz++;

        if(siz == 2){

            if(sum % k == 0){

                ans++;
                sum = 0;
                siz = 0;

            } else {

                sum - a.back();
                a.push_front(a.back());
                siz = 1;

            }


        }

        a.pop_back();

    }

    if(a.back() + a.front() % k == 0) ans++;

    cout << ans * 2 << "\n";

    return 0;
}


