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

        vector<int> a (n);

        map<int, int> f;

        for(int i = 0; i < n; i++){

            cin >> a[i];

            f[a[i]]++;

        }


        if(f.size() == 1){

           cout << "Yes\n";

        } else if(f.size() <= 2){

            bool flag = false;

            for(auto i : f){

                if(i.second == n / 2) flag = true;



            }

                cout << (flag == true? "Yes" : "No") << "\n";



        } else {

            cout << "No\n";

        }




    }


    return 0;
}


