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
    for(int i=0; i<n; i++) cin>>a[i];

    ll caja[3] = {0, 0, 0};

    bool f = true;

    for(int i=0; i<n; i++){

     if(a[i] == 25) caja[0]++;

     if(a[i] == 50){

        if(caja[0]>0){
          caja[0]--;
          caja[1]++;
        }else{
          f = false;
        }//if


     }else if (a[i] == 100){

       if(caja[0] > 0 && caja[1] > 0){
        caja[0]--;
        caja[1]--;
        caja[2]++;
       }else if(caja[0]>2){
        caja[0] -= 3;
       }else{
       f = false;
       }//if



     }//if anidado



    }//for



    if(f){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }//if


    return 0;
}

