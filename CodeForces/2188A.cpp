#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"
#define all(x) (x).begin(), x.end()
#define rall(x) (x).rbegin(), x.rend()
#define INF -1


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<int> ans (n, 0);

        int aux = 1;

        for(int i = n - 1; i >= 0; i-=2){

            ans[i] = aux;
            aux++;


        }


        for(int i = 0; i < n; i++){

            if(ans[i] == 0){

                 ans[i] = aux;
                 aux++;

            }


        }


        for(int i = 0; i < n; i++){

            cout << ans[i] << (i + 1 == n? "\n" : " ");

        }


    }




    return 0;
}
