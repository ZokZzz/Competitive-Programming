#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int t = 1;
    cin>>t;

    while(t-->0){

        int n = 1;
        cin>>n;

        vector<int> a(n); multiset<int> co;

        for(int i = 0; i < n ; i++) { cin>>a[i]; co.insert(a[i]);}//for

        if (n == 1) {

            cout << 0 << "\n";
            continue;

        }//if

        int m = 0;

        for(int i = 1; i <= n; i++){

            int aux = co.count(i);

            if(aux > m) m = aux;


        }//for



        cout << n - m << "\n";





    }//while


    return 0;
}
