#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    while(t-->0){

        int n = 0;
        cin >> n;

        vector<long long> a(n);

        bool f = true;

        int x = -1, y = -1;

        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 0; i < n; i++) {

                for(int j = i + 1; j < n; j++){

                    if((a[j] % a[i]) % 2 == 0){

                        x = a[i];
                        y = a[j];

                        f = false;

                        break;

                    }

                    if(f == false) break;


                }


        }



        if(x < 0 && y < 0){
            cout << -1 << "\n";
        } else {
            cout << x << " " << y << "\n";
        }




    }




    return 0;
}


