#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n = 1, m = 1;
    cin >> n >> m;

    char board[n+1][m+1];

    for(int i = 1; i <= n; i++){

            for(int j = 1; j <= m; j++){

                cin>>board[i][j];

            }//for

    }//for anidado


    int indi = 0, indj = 0;


    for(int i = 1; i <= n; i++){

            for(int j = 1; j <= m; j++){

                if(board[i][j] == '*'){
                    indi ^= i;
                    indj ^= j;
                }//if

            }//for

    }//for anidado






    cout << indi << " " << indj << "\n";

    return 0;
}

