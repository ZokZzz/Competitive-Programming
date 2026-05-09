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


void tc(){

    long long n = 0, k = 0;
    cin >> n >> k;

    vector<long long> a(n);

    set<long long> s;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    if(s.size() == n){

        vector<long long> b = {a[0], a[1] , a[2]};

        for(int i = 0; i < k; i++) cout << b[i % 3] << (i == k - 1? "\n" : " ");

    } else {

        long long x = 0,y = 0, z = 0;

        for(int i = 1; i <= n; i++){

            if(!s.count(i)){

                x = i;
                break;

            }

        }

        z = a[n - 1];

        for(int i = 1; i <= n; i++){

            if(i != x && i != z){

                y = i;
                break;

            }

        }

        vector<long long> b = {x, y, z};

        for(int i = 0; i < k; i++) cout << b[i % 3] << (i == k - 1? "\n" : " ");

    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t-- > 0){
        tc();
    }
}

