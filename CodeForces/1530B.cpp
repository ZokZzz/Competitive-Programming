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



void make(vector<vector<int>> &a, int i, int j, int n, int m){

            if(i + 1 < n && a[i + 1][j] == 1) return;
            if(i - 1 >= 0 && a[i - 1][j] == 1) return;
            if(j - 1 >= 0 && i + 1 < n && a[i + 1][j - 1] == 1) return;
            if(j - 1 >= 0 && i - 1 >= 0 && a[i - 1][j - 1] == 1) return;
            if(j - 1 >= 0 && a[i][j - 1] == 1) return;

            a[i][j] = 1;




}



void tc(){

    int n = 0, m = 0;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int> (m, 0));

    for(int i = 0; i < 1; i++){

        bool f = true;

        for(int j = 0; j < m; j++){

                if(f){

                    a[i][j] = 1;


                } else {

                    a[i][j] = 0;

                }

                f = !f;

        }


    }

    bool h = true;

    for(int i = 0; i < n; i++){



        for(int j = 0; j < 1; j++){

                if(h){

                    a[i][j] = 1;


                } else {

                    a[i][j] = 0;

                }



        }

         h = !h;


    }


    bool x = false;


    for(int i = n - 1; i < n; i++){



        for(int j = 1; j < m; j++){

                if(x){

                    a[i][j] = 1;


                } else {

                    a[i][j] = 0;

                }

                x = !x;

        }


    }



    for(int i = 0; i < n; i++){

         make(a, i, m - 1, n, m);

    }



    //show
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++) cout << a[i][j];
        cout << "\n";


    }

    cout << "\n";







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
