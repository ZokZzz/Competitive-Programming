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
#define full(x, y) memset(x, y, sizeof(x))


void change(vector<bool> &ans, long long a, long long b, char c){

        long long mid = (a + b) / 2;

        if((a + b) % 2  != 0) mid++;

        for(int i = 1: i <= 10000; i++){

            if(i < a) {

                a[i] = false;

            } else if (i > b){

                a[i] = false;

            } else {






            }





        }

}
// No validar cada respuesta
// Como ya se sabe la respuesta solo comparar el change con la respuesta




void tc(){

    long long n = 0;
    cin >> n;

    vector<bool> ans(1000 + 5, false);

    for(int i = 0; i < n; i++){

            long long a = 0, b = 0;
            cin >> a >> b;

            char c;
            cin >> c;

            change(ans, a, b, c);

    }

    bool check = false;

    long long l = 0, r = 0;

    for(int i = 1; i <= 1000; i++){

        if(ans[i] == true){

            check = true;
            l = i;
            break;



        }


    }

    for(int i = 1000; i >= 1; i--){

        if(ans[i] == true){

            check = true;
            r = i;
            break;



        }


    }

    if(check){

        cout << l << " " << r << "\n";

    } else cout << "*\n";


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

