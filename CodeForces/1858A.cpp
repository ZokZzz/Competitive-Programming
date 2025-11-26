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

    ll a = 1, b = 1, c = 1;
    cin>>a>>b>>c;

    if(c % 2 == 0) {

       if(a > b) cout<<"First\n";
       else cout<<"Second\n";

    }else{

       if(b > a) cout<<"Second\n";
       else cout<<"First\n";

    }//if anidado



    }//while

    return 0;
}

