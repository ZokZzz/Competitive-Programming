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
    }//for

    int ceros = 0, cincos = 0;

    for(int i=0; i<n; i++){
        if(a[i] == 0){
            ceros++;
        }else{
            cincos++;
        }
    }//for

   cincos = cincos - (cincos%9);

    if(ceros == 0){
        cout<<-1<<"\n";
    }else if(cincos<9){
    cout<<0<<"\n";
    }else{

      for(int i=0; i<cincos; i++){
        cout<<5;
      }

      for(int i=0; i<ceros; i++){
        cout<<0;
      }

      cout<<"\n";

    }


    return 0;
}

