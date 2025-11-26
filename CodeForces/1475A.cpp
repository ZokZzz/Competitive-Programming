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

    long long n = 0;
    cin>>n;

    /*if(n & (n-1)){

      cout << "YES\n";

    } else {

      cout << "NO\n";

    }//if*/

    while(n % 2 == 0){
        n /= 2;
    }//while

    if(n == 1){
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }//if


    }//while


    return 0;
}
