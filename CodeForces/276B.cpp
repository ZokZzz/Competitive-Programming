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
    map<char, int>f;
    for(int i=0; i<s.size(); i++){
        f[s[i]]++;
    }//for

   int impar = 0;

   for(auto aux : f){
    if(aux.second % 2 != 0){
        impar++;
    }//if
   }//for each

   if(impar<=1){
    cout<<"First\n";
   }else if (impar % 2 == 0){
    cout<<"Second\n";
   }else{
    cout<<"First\n";
   }

    return 0;
}

