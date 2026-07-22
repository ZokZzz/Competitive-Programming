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
#define vvpii vector<vector<pair<int, int>>>
#define vvpll vector<vector<pair<long long, long long>>>
#define pii pair<int, int>
#define pll pair<long long, long long>
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

vi dp(1e7, -1), coins;

const int mod = 1e9 + 7;

ll n = 0, x = 0;

int f (int i){

    if(i == x) return 1;

    if(dp[i] != -1) return dp[i];

    int ans = 0;

    for(int j = 0; j < coins.size(); j++){

        if(i + coins[j] <= x && i >= coins[j]) ans = (f(i + coins[j]) + ans) % mod;

    }

    return dp[i] = ans;



}

void tc(){

    cin >> n >> x;

    coins.assign(n, 0);

    for(int i = 0; i < n; i++) cin >> coins[i];

    int ans = f(0);

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



/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
 
 
ll n=1, x=1;
vector<ll>memo(1e6, -1);
 
const ll mod = 1e9 + 7;
 
ll coin(int i, vector<ll> &coins) {
    if (i == x) {
       return 1;
    }
 
    if(memo[i]!=-1) return memo[i];
 
    ll ans=0;
    for (int j = 0; j<coins.size(); j++) {
        if (i+coins[j]<=x) {
            ans = (coin(i+coins[j], coins)+ans)%mod;
        }
    }
    return memo[i] = ans;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cin>>n>>x;
    vector<ll>coins(n);
    for(int i=0; i<n; i++) cin>>coins[i];
    ll ans = coin(0, coins);
    cout<<(ans)<<"\n";
    return 0;
}*/