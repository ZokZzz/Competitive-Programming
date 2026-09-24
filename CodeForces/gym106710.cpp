#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define oo 1e9
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define vvpii vector<vector<pair<int, int>>>
#define vvpll vector<vector<pair<long long, long long>>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define si set<int>
#define sll set<long long>
#define sti stack<int>
#define stll stack<long long>
#define stc stack<char>
#define mii map<int, int>
#define mll map<long long, long long>
#define qi queue<int>
#define qll queue<long long>
#define qc queue<char>
#define pqi priority_queue<int>
#define pqll priority_queue<long long>
#define pqpii priority_queue<pair<int, int>>
#define pqpll priority_queue<pair<long long, long long>>
#define pqim priority_queue<int, vector<int>, greater<int>>
#define pqllm priority_queue<long long, vector<long long>, greater<long long>>
#define pqpiim priority_queue<pii, vector<pii>, greater<pii>>
#define pqpllm priority_queue<pll, vector<pll>, greater<pll>>
#define sz(a) ((int)a.size())
#define memfull(x, y) memset(x, y, sizeof(x))



void tc(){

    ll n = 0, k = 0;
    cin >> n >> k;

    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    sll s(all(a));

    vi check(*s.rbegin() + 1, 0);

    for(auto i : s){

        check[i] = 1;

    }

    ll ans = 0, l = 0, r = n - 1;

    for(int i = 0; i < check.size(); i++){

        if(check[i] == 0){

            l = i;
            break;

        }

    }

      for(int i = check.size() - 1; i > -1; i--){

        if(check[i] == 1){

            r = i;
            break;

        }

    }

    ans = l;

    while(r - l > 1 && k > 0){

        if(check[l] = 0 && check[r] == 1){

            k--;
            ans++;
            l++;

        }

        r--;

    }

    

    cout << ans << "\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t-->0){
        tc();
    }
}
 