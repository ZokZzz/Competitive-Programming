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
    string s;
    cin>>s;
    if(s.size()<=2){cout<<"NO\n"; continue;}//if
    if(s[0]=='1' && s[1] == '0' && (s[2]-'0' >=2) && s.size()<=3){
        cout<<"YES\n";
    }else if(s[0]=='1' && s[1] == '0' && (s[2]-'0'>0  && s.size()>3)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
        }//if

    }//while


    return 0;
}
