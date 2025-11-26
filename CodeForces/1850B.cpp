
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
      int n, w = -1, index;
      cin>>n;
      for(int i=0; i<n; i++){
           int a, b;
           cin>>a>>b;
           if(a<=10 && b>w){
            w = b;
            index = i+1;
           }

      }//for

      cout<<index<<"\n";

    }//while


    return 0;
}
