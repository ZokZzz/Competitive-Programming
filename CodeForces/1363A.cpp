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

        int n = 0, x = 0;
        cin >> n >> x;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int im = 0;

        for(int i = 0; i < n; i++) if(a[i] % 2 != 0) im++;

        bool f = false;

        if(x % 2 == 0 && n - im == 0) f = false;
        else if(im >= x && x % 2 != 0) f = true;
        else if(im % 2 != 0 && im != 0 && n - im >= 1) f = true;
        else if(im % 2 == 0 && (im - 1 + (n-im) >= x)) f = true;



        if(f) cout << "Yes\n";
        else cout << "No\n";



    }


    return 0;
}


