#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int s=0;
    for(int i=0; i<n; i++){
        int aux;
        cin>>aux;
        s+=aux;
    }
    n++;
    int c=0;
    for(int i=s+1; i<=s+5; i++){
        if((i-1) % n != 0){
            c++;
        }
    }

    cout<<c<<"\n";

    return 0;
}

