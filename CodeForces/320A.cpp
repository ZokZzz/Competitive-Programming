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
    string s = to_string(n);

    for(int i=0; i<s.size(); i++){
        if(s[i]!='1' && s[i]!='4'){
           cout<<"NO\n";
           return 0;
        }
    }

    for(int i=0; i<s.size(); i++){
        if(s[i]=='4'){
           cout<<"NO\n";
           return 0;
        }else if(s[i]=='1' && s[i+1] == '4' && s[i+2] == '4'){
             i+=2;
        }else if(s[i]=='1' && s[i+1] == '4'){
           i++;
        }else if(s[i]=='1'){
          continue;
        }else{
          cout<<"NO\n";
          return 0;
        }
    }//for

    cout<<"YES\n";

    return 0;
}
