#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t, sx ,sy, ex, ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string wind;
    cin>>wind;
    int w = 0, e = 0, n = 0, s = 0;
    if(ex-sx < 0){w = abs(ex-sx);}else{ e = ex-sx;}//if
    if(ey-sy < 0){s = abs(ey-sy);}else{ n = ey-sy;}//if
    if(ex == sx && ey == sy){cout<<0<<"\n"; return 0;}//if

    for(int i=0; i<t; i++){
      if(wind[i] == 'N' && n > 0){
        n--;
      }// if

       if(wind[i] == 'E' && e > 0){
        e--;
      }// if

       if(wind[i] == 'W' && w > 0){
        w--;
      }// if


       if(wind[i] == 'S' && s > 0){
        s--;
      }// if

       if(n==0 && e==0 && w==0 && s == 0){
      cout<<i+1<<"\n";
      return 0;
      }// if



    }//for


    cout<<-1<<"\n";


    return 0;
}

