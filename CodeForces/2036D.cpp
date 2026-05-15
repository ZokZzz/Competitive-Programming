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

long long ans = 0;


long long searchNumber(long long n, long long m,  vector< vector<long long> > &a, long long x, long long y){


    switch(a[x][y]){

        case 1 :{


            break;
        }

        case 5 :{


            break;
        }


        case 4 :{


            break;
        }

        default:{

            searchNumber()

        }





    }







}




void tc(){

    long long n = 0, m = 0;
    cin >> n >> m;

    vector< vector<long long> > a (n, vector<long long>(m));

    for(int i = 0; i < n; i++){

        string s;
        cin >> s;

        for(int j = 0; j < m; j++) a[i][j] = s[j] - '0';

    }

    searchNumber(n, m, a, 0, 0);


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

