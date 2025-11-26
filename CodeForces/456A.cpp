#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);


    int n = 1;
    cin >> n;

    vector<pair<int,int>>a(n);

    for(int i = 0; i < n; i++){

        int x = 1, y = 1;
        cin >> x >> y;
        a[i] = {x, y};

    }//for

    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; i++){

        if(a[i].second > a[i+1].second){

            cout << "Happy Alex\n";
            return 0;

        }//if

    }//for

    cout << "Poor Alex\n";

    return 0;
}

