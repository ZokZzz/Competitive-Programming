#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"

ll a = 0, b = 0, n = 0;

string add(string str, int m){

    for(int i=0; i<=9; i++){
    string aux = str;
    char x = '0' + i;
    int nm = (m * 10 + i) % b;
    if(nm == 0){return aux + x;}//if

    }//for

    return "-1";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cin>>a>>b>>n;

    string s = to_string(a);
    int mod = a%b;

    for(int i=0; i<n; i++){
      string sa = add(s, mod);
      if(s == "-1"){
        cout<<-1<<"\n"; return 0;
       }//if
       s = sa;
       mod = 0;
    }//for


    cout<<s<<"\n";

    return 0;
}
