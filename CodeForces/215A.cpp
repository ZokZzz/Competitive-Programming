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
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int mayor = 0, ans = 0;

    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(b[j]%a[i]==0){

              if(b[j]/a[i]>mayor){
                mayor = b[j]/a[i];
                ans = 0;
              }

              if(b[j]/a[i] == mayor){
               ans++;
              }


            }
        }//for
    }//for anidado

    cout<<ans<<"\n";

    return 0;
}

