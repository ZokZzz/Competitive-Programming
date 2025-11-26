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

    vector<long long>a(n);

    for(int i = 0; i < n; i++){

        cin >> a[i];

    }//for

    sort(a.begin(), a.end());

    long long ans = 0;

    for(int i = 0; i < n; i++){

    ans += abs((i+1)-a[i]);

    }//for

    cout << ans << "\n";

    return 0;
}


