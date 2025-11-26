#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cin>>board[i][j];

        }//for


    }//for anidado



    vector<vector<bool>> a(n, vector<bool>(n, 0));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(i == j) a[i][j] = 1;
            if(i + j == n-1) a[i][j] = 1;

            if(n == 5){

                if(i == 2 || j == 2) a[i][j] = 1;

            }//if anidado


            if(n == 3){

                if(i == 1 || j == 1) a[i][j] = 1;

            }//if anidado

        }//for


    }//for anidado


    int ans = 0;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(a[i][j] == 1) ans += board[i][j];

        }//for


    }//for anidado


    cout << ans << "\n";


    return 0;
}

