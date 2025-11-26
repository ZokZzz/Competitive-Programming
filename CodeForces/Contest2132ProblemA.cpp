#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0){
      int n;
      cin>>n;
      string a;
      cin>>a;
      int m;
      cin>>m;
      string b;
      cin>>b;
      string ins;
      cin>>ins;

      for(int i=0; i<m; i++){
        string aux;
        aux.pb(b[i]);
        if(ins[i] == 'D'){
            a.pb(b[i]);
        }else{
          a.insert(0, aux);
        }
      }//for

      cout<<a<<"\n";



    }//while


    return 0;
}

