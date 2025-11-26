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

    int n = 1, m = 1;
    cin>>n>>m;

    string x, s;
    cin>>x>>s;

    int c = 0, aux = 0;

    bool f = true;

    while(true){

    int res = x.find(s);

     if(res != string::npos){

       break;

     }else{

        if(aux > 8){

            f = false;
            break;

        }//if

       c++;
       x+=x;
       aux++;

     }//if



    }//while


    if(f){

    cout<<c<<"\n";

    }else{

    cout<<-1<<"\n";

    }//if



    }//while


    return 0;
}
