#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define debug(x) cout<<#x<<": "<<x<<"\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int m = 1, cur = 1;

    for(int i=0; i<s.size()-1; i++){
        if(s[i] == s[i+1]){
          cur++;
        }else{
         m = max(m, cur);
         cur = 1;
        }
    }//for

    m = max(m, cur);

    cout<<m<<"\n";


    return 0;
}
